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
        ll n;
        cin >> n;
        
        ll p = 10;
        vector<ll> ans;
        while(p <= n){
            ll div = p + 1;

            if(n%div == 0){
                ll q = n/div;
                ans.push_back(q);
            }

            p *= 10;
        }

        if(ans.empty()){
            cout << 0 << "\n";
        }
        else{
            cout << ans.size() << "\n";
            
            sort(ans.begin(),ans.end());
            for(int i=0; i<ans.size(); i++){
                cout << ans[i] << " ";
            }
            cout << "\n";
        }
    }

      
    return 0;
}