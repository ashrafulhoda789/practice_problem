/* Author: Ashraful Hoda Jamshed */
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        int n,a,b,c;
        cin >> n >> a >> b >> c;

        int total_t = a + b + c;
        vector<int> pre(4);
        pre[0] = 0;
        pre[1] = a;
        pre[2] = a+b;
        pre[3] = total_t;

        auto ok = [&](int mid){
            int q = mid / 3;
            int r = mid % 3;

            ll total = 1LL * total_t*q + pre[r];
            return total >= n;
        };

        int l = 1, r = 1e9, ans = -1;
        while(l <= r){
            int mid = l+(r-l)/2;
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