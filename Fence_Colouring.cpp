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
        map<int,int> freq;
        for(int i=0; i<n; i++){
            cin >> v[i];
            freq[v[i]]++;
        }

        int mx = 0;
        for(auto i : freq){
            int v = i.second;
            mx = max(mx, v);
        }

        //cout << mx << "\n";
        if(mx == freq[1]){
            cout << n - mx << "\n";
        }
        else{
            cout << n - mx + 1 << "\n";
        }
        
    }
      
    return 0;
}