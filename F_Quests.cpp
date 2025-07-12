#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll n,c,d;
        cin >> n >> c >> d;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.rbegin(),v.rend());

        ll total = 0;
        for(int i=0; i<min(n,d); i++){
            total += v[i];
        }

        if(total >= c){
            cout << "Infinity\n";
            continue;
        }

        if(v[0]*d < c){
            cout << "Impossible\n";
            continue;
        }

        auto ok = [&](ll k){
            ll sum = 0;
            for(int i=0; i<=min(n-1,k); i++){
                sum += (((d - (i + 1)) / (k + 1)) + 1)*v[i];
                if(sum >= c){
                    return true;
                    break;
                }
            }

            return sum >= c;

        };

        ll l = 0, r = d, ans, mid;
        while(l <= r){
            mid = l + (r-l)/2;
            if(ok(mid)){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        cout << ans << "\n";

        
    }
      
    return 0;
}