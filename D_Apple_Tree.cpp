#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 2e5 + 9;
vector<int> g[maxN];
vector<int> leaf(maxN,0);
vector<bool> vis(maxN);

int dfs(int u, int p){

    int child = 0;
    for(auto v : g[u]){
        if(v == p) continue;
        child += dfs(v,u);
    }

    if(child <= 0){
        return leaf[u] = 1;
    }
    else{
        return leaf[u] = child;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        for(int i=0; i<=n; i++){
            g[i].clear();
            leaf[i] = 0;
        }

        for(int i=1; i <= n-1; i++){
            int u,v;
            cin >> u >> v;

            g[u].push_back(v);
            g[v].push_back(u);
        }

        dfs(1,-1);

        // for(int i=0; i<=n; i++){
        //     cout << i << " -> " << leaf[i] << "\n";
        // }
        // cout << "\n";

        int q;
        cin >> q;

        for(int i=0; i<q; i++){
            int x,y;
            cin >> x >> y;

            cout << 1LL * leaf[x] * leaf[y] << "\n";
        }
        
    }
      
    return 0;
}