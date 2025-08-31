#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

ll query(ll start, vector<ll> &a){

    cout << "? " << start << " " << a.size();
    for(auto u : a)
        cout << " " << u;
    
    cout << endl;
    ll len;
    cin >> len;
    return len;
}

void answer(vector<ll> &a){
    cout << "! " << a.size();
    for(auto u : a)
        cout << " " << u;
    
    cout << endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> len[n+2];

        vector<ll> a;
        for(int i=1; i<=n; i++){
            a.push_back(i);
        }

        ll mx = 0;
        for(int i=1; i<=n; i++){
            ll l = query(i,a);
            len[l].push_back(i);
            mx = max(mx,l);
        }

        a.clear();
        ll start = len[mx][0];

        a.push_back(start);

        for(int i = mx - 1; i>= 1; i--){
            vector<ll> b = a;
            for(int j= 1; j<i; j++){
                for(auto u : len[j]){
                    b.push_back(u);
                }
            }

            for(auto u : len[i]){
                b.push_back(u);
                ll l = query(start,b);
                if(l == mx){
                    a.push_back(u);
                    break;
                }
                b.pop_back();
            }
        }

        answer(a);
        
    }
      
    return 0;
}