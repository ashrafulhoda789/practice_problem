#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long ans = 1;
        for(int i=1; i<=n; i++){
            ans = (1LL * ans%MOD * i%MOD)%MOD;
        }
        
        cout << ans << "\n";
    }
    return 0;
}