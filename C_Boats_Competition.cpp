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

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());
        int ans = 0;

        if(n==1){
            cout << "0\n";
            continue;
        }
        
        for(int i=a[0]+a[1]; i<=a[n-1]+a[n-2]; i++){
            int l = 0,r=n-1;
            int cnt=0;

            while(l <= r){
                if(a[l]+a[r] == i && l!=r){
                    cnt++;
                    l++;
                    r--;
                }else if(a[l]+a[r] > i){
                    r--;
                }else{
                    l++;
                }
            }
            ans = max(ans,cnt);
        }

        cout << ans << '\n';
        
    }
      
    return 0;
}