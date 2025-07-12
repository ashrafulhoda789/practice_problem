#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll n,l,r;
        cin >> n >> l >> r;

        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        
        sort(v.begin(),v.end());

        ll sum = 0;
        for(int i=0; i<n; i++){
            ll left = l - v[i];
            ll right = r - v[i];

            auto it1 = lower_bound(v.begin()+i+1,v.end(),left);
            auto it2 = upper_bound(v.begin()+i+1, v.end(),right);

            ll dif = it2 - it1;
            sum += dif;
        }
        cout << sum << "\n";
        
    }
      
    return 0;
}