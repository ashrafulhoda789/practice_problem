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
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        ll m = k+1;
        for(int i=0; i<n; i++){
            ll r = v[i]%m;
            ll p = ((m-r)%m) * (k%m)%m;
            v[i] += k*p;
        }


        for(int i=0; i<n; i++){
            cout << v[i] << " ";
        }

        cout << "\n";
        
    }
      
    return 0;
}