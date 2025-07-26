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

        vector<ll> v;
        map<ll,ll> mp;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;

            x %= 10;
            mp[x]++;
            if(mp[x] <= 3){
                v.push_back(x);
            }
        }

        bool ok = false;

        for(int i=0; i<v.size(); i++){
            for(int j= i+1; j<v.size(); j++){
                for(int k= j+1; k<v.size(); k++){

                    if((v[i] + v[j] + v[k])%10 == 3){
                        ok = true;
                        break;
                    }

                }
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
        
    }
      
    return 0;
}