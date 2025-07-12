#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;

    ll cnt1 = (n/a);
    ll cnt2 = (n/b);

    ll LCM = (a/__gcd(a,b))*b;
    ll cnt= n/LCM;

    if(p < q){
        cnt1 -= cnt;
    }
    else{
        cnt2 -= cnt;
    }

    cout << cnt1*p + cnt2*q << "\n";
      
    return 0;
}