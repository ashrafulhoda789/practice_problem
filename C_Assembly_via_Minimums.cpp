#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll m = (n*(n-1))/2;
        vector<ll> v(m);
        for(int i=0; i<m; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        vector<ll> res;

        ll l=0,r=n-1;
        while(l < m){
            res.push_back(v[l]);
            l += r;
            --r;
        }
        res.push_back(res.back());

        for(int i=0; i<n; i++){
            cout << res[i] << " ";
        }
        cout << "\n";
    }
      
    return 0;
}