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
        int x_or = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            x_or ^= v[i];
        }

        if(n%2 == 0 && x_or!=0){
            cout << "-1\n";
        }
        else cout << x_or << "\n";
        
    }
      
    return 0;
}