#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    auto ok = [&](int mid){
        int cnt = 1;
        int last_pos = v[0];
        for(int i=0; i<n; i++){
            if((v[i] - last_pos) >= mid){
                cnt += 1;
                last_pos = v[i];
            }
        }

        return cnt >= k;
    };

    int l=0,r=1e9,ans,mid;
    while(l <= r){
        mid = l + (r-l)/2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }

    cout << ans << "\n";
      
    return 0;
}