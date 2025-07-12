#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    
    while(t--){
        int x;
        cin >> x;

        if(x == 100){
            cout << "0\n";
        }else{
            int n = 100 - x;
            n /= 10;

            cout << n*10 << "\n";
        }
            
    }
      
    return 0;
}