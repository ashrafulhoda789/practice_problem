#include<bits/stdc++.h>
using namespace std;
const int B = 30;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<int> bits(B+1);
        for(int i=0; i<n; i++){
            for(int j=B; j>=0; j--){
                if((a[i] >> j)&1){
                    bits[j]++;
                }
            }
        }

        int ans = 0;
        for(int j=B; j>=0; j--){
            if(bits[j] == n){
                ans += (1LL << j);
            }else{
                int need = n - bits[j];
                if(k >= need){
                    ans += (1LL << j);
                    k -= need;
                }
            }
        }
        cout << ans << "\n";
        
    }
      
    return 0;
}