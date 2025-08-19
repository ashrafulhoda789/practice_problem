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
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        int ans = 0;
        bool ok = false;
        for(int i=0; i<n; i++){
            if(mp[v[i]] >= 3){
                ans = v[i];
                ok = true;
                break;
            }
            
        }

        if(ok)
            cout << ans << "\n";
        else cout << -1 << "\n";
    }
      
    return 0;
}