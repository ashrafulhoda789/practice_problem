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
        ll c;
        cin >> n >> c;

        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        vector<bool> vis(n,false);
        vector<ll> best = v;

        int tmp = n;
        int ans = 0;
        while(tmp > 0){
            int idx = -1;
            ll wt = -1;

            for(int i=0; i<n; i++){
                if(!vis[i] && best[i] <= c){
                    if(best[i] > wt){
                        wt = best[i];
                        idx = i;
                    }
                }
            }

            if(idx == -1){
                ll mn = LLONG_MAX;
                for(int i=0; i<n; i++){
                    if(!vis[i] && best[i] < mn){
                        mn = best[i];
                        idx = i;
                    }
                }
                ans++;
            }

            vis[idx] = true;
            tmp--;

            for(int i=0; i<n; i++){
                if(!vis[i]){
                    best[i] *= 2;
                }
            }

        }

        cout << ans << "\n";
        
    }
      
    return 0;
}

