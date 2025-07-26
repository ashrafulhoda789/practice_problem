#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,c;
        cin >> n >> c;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int need = c;
        int mn = *min_element(v.begin(),v.end());

        if(mn > need){
            need += (mn - c);
        }

        for(int i=0; i<n; i++){
            if(need == v[i]){
                need += 1;
            }    
        }

        cout << need - c << "\n";
        
    }
      
    return 0;
}