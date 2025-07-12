#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    ll num;
    cin >> num;

    ll ans = 0;
    vector<ll> v = {100,20,10,5,1};

    for(auto i : v){
        ans += num/i;
        num %= i;
    }

    cout << ans << "\n";
      
    return 0;
}