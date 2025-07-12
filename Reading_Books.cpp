#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    ll sum = 0,mx=0;
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        sum += x;
        mx = max(mx,x);
    }

    ll ans = max(2*mx,sum);
    cout << ans << "\n";
      
    return 0;
}