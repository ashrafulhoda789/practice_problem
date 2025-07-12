#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        long long k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> h(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        
        for(int i=0; i<n; i++){
            cin >> h[i];
        }

        int l=0,ans = 0;
        long long sum = 0;
        for(int i=0; i<n; i++){

            if(i > 0 && h[i-1]%h[i]!=0){
                sum = 0;
                l = i;
            }

            sum += a[i];

            if(sum <= k ){
                ans = max(ans,i-l+1);
            }else{
                while(sum > k){
                    sum -= a[l];
                    l++;
                }
            }

        }

        cout << ans << "\n";
        
    }
      
    return 0;
}