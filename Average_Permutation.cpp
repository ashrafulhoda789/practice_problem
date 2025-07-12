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

        if(n == 3){
            cout << "1 2 3\n";
        }else{
            cout << n-1 << " " << n-2 << " ";
            for(int i=1; i<=n-4; i++){
                cout << i << " ";
            }
            cout << n-3 << " " << n << "\n";
        }
        
    }
      
    return 0;
}