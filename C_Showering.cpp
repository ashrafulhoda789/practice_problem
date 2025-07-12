#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        ll s,m;
        cin >> n >> s >> m;

        vector<pair<int,int>> v;
        for(int i=0; i<n; i++){
            int a,b;
            cin >> a >> b;
            v.push_back({a,b});
        }

        // for(auto i : v){
        //     cout << i.first << " " << i.second << "\n";
        // }
        bool ok = false;
        ll prev = 0;
        for(int i=0; i<n; i++){
            ll p = v[i].first - prev;
            if(p >= s){
                ok = true;
                break;
            }
            prev = v[i].second;
            if(i == n-1){
                p = m - prev;
                if(p >= s){
                    ok = true;
                    break;
                }
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";

        
    }
      
    return 0;
}