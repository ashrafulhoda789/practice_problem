#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,x,y;
    cin >> n >> x >> y;

    auto ok = [&](int time){
        int t = time - min(x,y);
        if(t < 0){
            return false;
        }
        
        int cnt = (t/x)+(t/y);

        return cnt >= n-1;
    };

    int l=1, r = 2e9, ans, mid;
    while(l <= r){
        mid = l + (r-l)/2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << ans << "\n";
      
    return 0;
}