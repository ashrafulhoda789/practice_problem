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

        int x_or = v[0];
        for(int i=1; i<n; i++){
            x_or ^= v[i];
        }

        // cout << x_or << "\n";
        int mn = x_or;
        for(int i=0; i<n; i++){
            int val = x_or^v[i];
            mn = min(mn,val);
        }

        cout << mn << "\n";
        
    }
      
    return 0;
}