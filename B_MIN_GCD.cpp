#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        auto it = min_element(v.begin(),v.end());
        ll mn = *it;
        //cout << mn << "\n";
        ll G = 0;
        bool ok = false;
        for(int i=0; i<n; i++){
            if(v[i]%mn == 0){
                if(v[i] == mn){
                    if(ok){
                        G = __gcd(G,v[i]);
                    }
                    else{
                        ok = true;
                        continue;
                    }
                }
                else{
                    G = __gcd(G,v[i]);
                }
            }
        }

        if(G == mn) cout << "Yes\n";
        else cout << "No\n";
        
    }
      
    return 0;
}