#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> v(n);
        vector<ll> cnt(30,0);
        for(int i=0; i<n; i++){
            cin >> v[i];
            for(int j=0; j<30; j++){
                cnt[j] += ((v[i] >> j)&1);
            }
        }

        ll ans = 0;
        for(int i=0; i<n; i++){
            ll total = 0;
            for(int j=0; j<30; j++){
                bool ok = ((v[i] >> j)&1);
                if(ok){
                    total += (1 << j)*(n-cnt[j]);
                }
                else total += (1 << j)*cnt[j];
            }
            ans = max(ans,total);
        }
        cout << ans << "\n";
    }
      
    return 0;
}