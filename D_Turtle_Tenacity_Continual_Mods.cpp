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

        int mn = *min_element(v.begin(),v.end());
        //cout << mn << "\n";

        int cnt = 0;
        for(int i=0; i<n; i++){
            if(v[i] == mn){
                cnt++;
            }
        }

        if(cnt == 1){
            cout << "YES\n";
        }
        else{
            bool ok = false;
            for(int i=0; i<n; i++){
                if(v[i]%mn != 0){
                    ok = true;
                    break;
                }
            }

            if(ok) cout << "YES\n";
            else cout << "NO\n";
        }
        
    }
      
    return 0;
}