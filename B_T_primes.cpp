#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n){
    if(n <= 1)
        return false;

    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

bool isSquareRoot(ll n){
    ll x = sqrtl(n);
    
    return (x*x) == n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    for(int i=0; i<n; i++){
        if(isSquareRoot(v[i]) && isPrime(sqrtl(v[i]))){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
      
    return 0;
}