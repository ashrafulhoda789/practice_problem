#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll a,b;
        cin >> a >> b;

        if(a%b == 0){
            cout << "0\n";
        }else{
            
            ll r = a%b;
            
            cout <<  b - r << "\n";
        }
        
    }
      
    return 0;
}