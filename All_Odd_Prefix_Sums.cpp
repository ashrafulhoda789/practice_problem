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
        int odd = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];

            if(v[i]%2 != 0) odd++;
        }

        if(odd == 1){
            cout << "Yes\n";
        }
        else cout << "No\n";
        
    }
      
    return 0;
}