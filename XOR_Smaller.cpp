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

        long long res = v[0];
        for(int i=1; i<n; i++){
            res &= v[i];
        }

        cout << res << "\n";

        
    }
      
    return 0;
}