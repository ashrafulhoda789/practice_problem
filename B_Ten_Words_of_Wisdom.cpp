#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<pair<int,int>> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i].first >> v[i].second;
        }

        int mx = INT_MIN,idx = -1;
        for(int i=0; i<n; i++){
            int word = v[i].first;
            if(word <= 10){
                if(v[i].second > mx){
                    mx = v[i].second;
                    idx = i+1;
                }
            }
        }

        cout << idx << "\n"; 
        
    }
      
    return 0;
}