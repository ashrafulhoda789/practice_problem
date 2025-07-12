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

        auto ok = [&](ll x){
            return (x*(x - 1) / 2) <= n;
        };
        
        ll l=0,r = 2e9, ans, mid;
        while(l <= r){
            mid = l + (r - l) / 2LL;
            if(ok(mid)){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        ll res = n - ans*(ans - 1)/2;
        cout << ans + res << "\n";
    }
      
    return 0;
}