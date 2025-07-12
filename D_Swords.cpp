#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int mx = *max_element(v.begin(),v.end());
    //cout << mx << "\n";

    ll ans = 0;
    int G=0;
    for(int i=0; i<n; i++){
        G = __gcd(G,mx-v[i]);
        ans += mx-v[i];
    }

    cout << ans/G << " " << G << "\n";
    return 0;
}