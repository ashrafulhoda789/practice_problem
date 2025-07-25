#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> v(n+2);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        v[n+1] = x;

        int ans = 0;
        for(int i=1; i<= n+1; i++){
            //cout << v[i] << " ";
            int diff = v[i] - v[i-1];

            if(i == n+1){
                diff *= 2;
            }

            if(diff > ans){
                ans = diff;
            }
        }

        cout << ans << "\n";
        
        
    }
      
    return 0;
}