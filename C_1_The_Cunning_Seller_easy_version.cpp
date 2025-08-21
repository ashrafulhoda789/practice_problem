#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

ll count(int x){
    
    ll c1 = 1,c2 = x;
    for(int i=0; i<x+1; i++){
        c1 *= 3;
    }

    for(int i=0; i<x-1; i++){
        c2 *= 3;
    }

    ll res = c1 + c2;
    return res;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<int> v;

        ll tmp = n;

        while(tmp > 0){
            ll r = tmp%3;
            v.push_back(r);

            tmp /= 3;
        }

        ll cost = 0;
        for(int i=0; i<v.size(); i++){
            cost += v[i] * count(i);
        }

        cout << cost << "\n";
        
    }
      
    return 0;
}