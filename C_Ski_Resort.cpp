#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,k;
        ll q;
        cin >> n >> k >> q;

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;
        ll ans=0;
        for (int i = 0; i < n; i++)
        {
            if(v[i] <= q) cnt++;
            else cnt = 0;

            ans += max(0,cnt - k + 1);
        
        }

        cout << ans << "\n";
        
        
    }
      
    return 0;
}