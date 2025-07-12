#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        auto ok = [&](int mid){
            set<int> s;
            int cnt = 0;
            for(int i=0; i<n; i++){
                if(v[i] < mid){
                    s.insert(v[i]);
                }

                if(s.size() == mid){
                    cnt++;
                    s.clear();
                }
            }

            return cnt >= k;
        };

        int l=0,r = n,ans,mid;
        while(l<=r){
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