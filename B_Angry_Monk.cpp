#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int k;
        ll n;
        cin >> n >> k;

        vector<ll> v(k);
        for(int i=0; i<k; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        ll sum = 0,cur = 0;
        for(int i=0; i<k-1; i++){
            sum += v[i];
            cur += v[i]-1;
        }

        cout << sum + cur << "\n";

    }
    
      
    return 0;
}