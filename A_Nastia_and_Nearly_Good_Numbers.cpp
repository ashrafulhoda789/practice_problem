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

        if(b == 1){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        ll x = a;
        ll mul = (a*b*2);
        ll y = mul-a;

        cout << x << " " << y << " " << x+y << "\n";
        
    }
      
    return 0;
}