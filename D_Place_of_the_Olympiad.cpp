#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,m,k;
        cin >> n >> m >> k;

        auto ok = [&](ll mid){
            ll possible_l = m / (mid + 1);
            ll extra = m % (mid + 1);
            ll total = (possible_l*mid + extra) * n;

            return total >= k;
        };

        ll l = 1, r = 1e9, ans, mid;
        while(l <= r){
            mid = l + (r-l)/2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}