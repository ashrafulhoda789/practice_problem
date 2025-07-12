#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    return __gcd(a,b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n+1),cnt(1001,-1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
            cnt[v[i]] = i;
        }

        int ans = -1;
        for(int i=1; i<=1000; i++){
            if(cnt[i] == -1) continue;
            for(int j=1; j<=1000; j++){
                if(cnt[j] == -1) continue;
                if(__gcd(i,j) == 1){
                    ans = max(ans, cnt[i]+cnt[j]);
                }
            }
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}