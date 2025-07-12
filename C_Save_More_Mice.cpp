#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> v(k);
        for(int i=0; i<k; i++){
            cin >> v[i];
        }

        sort(v.rbegin(),v.rend());

        int ans = 0, cat_pos = 0;
        for(int i=0; i<k; i++){
            if(cat_pos < v[i]){
                ans++;
                cat_pos += (n-v[i]);
            }
            else{
                break;
            }
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}