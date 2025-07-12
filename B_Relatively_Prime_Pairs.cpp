#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isValid(ll a,ll b){
    return (__gcd(a,b) == 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    ll l,r;
    cin >> l >> r;

    if((r-l)%2 == 0){
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    for(ll i=l; i<=r; i+=2){
        if(isValid(i,i+1)){
            cout << i << " " << i+1 << "\n";
        }
    }
      
    return 0;
}