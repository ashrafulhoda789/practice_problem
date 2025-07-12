#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int idx = 0;
        while(idx < n && v[idx] == 0){
            idx++;
        }

        long long ans = 0;
        for(int i=idx; i<n-1; i++){
            ans += v[i];
            if(v[i] == 0) ans += 1;
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}