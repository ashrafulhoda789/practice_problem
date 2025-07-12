#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int h,n;
        cin >> h >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<int> c(n);
        for(int i=0; i<n; i++){
            cin >> c[i];
        }

        auto ok = [&](long long mid){
            long long sum = 0;
            for(int i=0; i<n; i++){
                long long total = (mid + c[i]-1)/c[i];
                sum += a[i]*total;

                if(sum >= h){
                    return true;
                    break;
                }
            }

            return sum >= h;
        };
        
        long long l = 1, r = 4e12, mid, ans;
        while(l <= r){
            mid = l + (r-l)/2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        cout << ans << "\n";
    }
      
    return 0;
}