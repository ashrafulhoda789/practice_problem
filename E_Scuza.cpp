#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,q;
        cin >> n >> q;

        vector<ll> a(n+1),pre(n+1);
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }

        //sort(a.begin(),a.end());
        
        for(int i=1; i<=n; i++){
            pre[i] = pre[i-1] + a[i];
        }

        ll mx = 0;
        for(int i=1; i<=n; i++){
            if(a[i] < mx) a[i] = mx;
            else mx = a[i];
        }

        while(q--){
            ll k;
            cin >> k;

            int idx = upper_bound(a.begin(),a.end(),k) - a.begin();
            
            cout << pre[idx-1] << " ";

        }
        cout << "\n";
    }
      
    return 0;
}