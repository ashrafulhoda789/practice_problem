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

        int x = INT_MAX;
        int y = 0;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            x &= v[i];
            y |= v[i];
        }

        cout << y - x << "\n";
        
    }
      
    return 0;
}