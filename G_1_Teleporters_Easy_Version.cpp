#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    
    while(t--){
        ll n,c;
        cin >> n >> c;

        vector<ll> v(n+1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
            v[i] += i;
        }

        sort(v.begin(),v.end());
        
        int cnt = 0;
        for(int i=1; i<=n; i++){
            if(c >= v[i]){
                c -= v[i];
                cnt++;
            }
        }

        cout << cnt << "\n";

    }
    return 0;
}