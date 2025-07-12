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

        int zero=0,nz=0,ans=0;

        for(int i=0; i<n; i++){
            if(v[i]==0) zero++;
            else nz++;
        }

        if(zero == 0){
            ans = 0;
        }else{
            if(zero-1 <= nz){
                ans = 0;
            }else{
                int mx = *max_element(v.begin(),v.end());
                if(mx == 1){
                    ans = 2;
                }
                else 
                    ans = 1;
            }
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}