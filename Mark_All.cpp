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

        int mn = min(v[0],v[n-1]);

        sort(v.begin(),v.end());

        mn = min(mn, v[0]+v[1]);

        cout << mn << "\n";
        
    }
      
    return 0;
}