#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll a,b,k;
        cin >> a >> b >> k;

        ll x = __gcd(a,b);

        ll dx = a/x;
        ll dy = b/x;

        if(dx <= k && dy <= k){
            cout << 1 << "\n";
        }
        else{
            cout << 2 << "\n";
        }
        
    }
      
    return 0;
}