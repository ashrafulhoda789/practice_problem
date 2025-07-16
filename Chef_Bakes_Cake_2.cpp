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

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        int coins = 0;
        for(int i=0; i<n; i++){
            if(b[i] > a[i])continue;

            coins += a[i] - b[i];
        }

        cout << coins << "\n";
        
    }
      
    return 0;
}