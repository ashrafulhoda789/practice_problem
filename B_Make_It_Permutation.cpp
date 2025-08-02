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

        cout << 2*n - 1 << "\n";
        for(int i=0; i<n; i++){
            cout << i+1 << " " << 1 << " " << i+1 << "\n";

            if(i < n-1){
                cout << i+1 << " " << i+2 << " " << n << "\n";
            }
        }
        
    }
      
    return 0;
}