#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll n,x;
        cin >> n >> x;

        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }

        auto ok = [&](ll mid){
            ll sum = 0;
            for(ll i=0; i<n; i++){
                sum += max((mid - v[i]),0LL);
                if(sum > x)break;
            }

            return sum <= x;
        };

        ll l=0, r = 1e18, ans, mid;
        while(l <= r){
            mid = l + (r-l)/2;
            if(ok(mid)){
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}