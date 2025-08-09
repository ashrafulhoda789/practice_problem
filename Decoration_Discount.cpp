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

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int mn = INT_MAX;
        for(int i=0; i<n-1; i++){
            int cost = v[i] + (v[i+1]/2);
            mn = min(mn,cost);
        }

        int f_min = INT_MAX, l_min = INT_MAX;
        for(auto i : v){
            if(i < f_min){
                l_min = f_min;
                f_min = i;
            }
            else if(i < l_min){
                l_min = i;
            }
        }

        mn = min(mn,(f_min + l_min));
        cout << mn << "\n";
        
    }
      
    return 0;
}