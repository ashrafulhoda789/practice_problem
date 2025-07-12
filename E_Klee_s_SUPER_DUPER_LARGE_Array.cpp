#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k;

        ll f = k, last = n + (k-1);
        ll total = 1LL*(f+last)*n/2;

        auto ok = [&](int mid){
            ll f1 = k, l1 = k+(mid - 1);
            ll sum = 1LL*(f1+l1)*mid/2;
            
            return abs(sum - (total - sum));  
        };

        ll l = 1, r = n, ans = LLONG_MAX ,mid;
        while(l <= r){
            mid = l + (r-l)/2;
            ll diff = ok(mid);
            ans = min(ans, diff);

            if(diff == 0)break;

            ll sum = mid*(2*k+mid-1)/2;
            if(sum < total-sum){
                l = mid + 1;
            }
            else r = mid - 1;
        }


        cout << ans << "\n";
        
    }
      
    return 0;
}