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

        sort(v.begin(),v.end());

        int mn = v[0];
        int mx = v[n-1];

        if((mn + mx)%2 == 0){
            cout << "0" << "\n";
        }
        else{

            int cnt1 = 0,cnt2 = 0;
            for(int i=1; i<n; i++){
                cnt1++;
                if((v[i]+mx)%2 == 0){
                    break;
                }
            }

            for(int i=n-2; i>=0; i--){
                cnt2++;
                if((v[i] + mn)%2 == 0){
                    break;
                }
            }

            //cout << cnt1 << " " << cnt2 << "\n";
            cout << min(cnt1,cnt2) << "\n";
        }
        
    }
      
    return 0;
}