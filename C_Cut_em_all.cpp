#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);
vector<int> ans(maxN);

int dfs(int u){
    vis[u] = true;
    int cnt = 1;

    for(auto i : g[u]){
        if(!vis[i]){
            cnt += dfs(i);
        }
    }

    ans[u] = cnt;
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    if(n%2 != 0){
        cout << -1 << "\n";
        return 0;
    }

    for(int i=1; i <= n-1; i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1);

    int res = 0;
    for(int i=2; i<=n; i++){
        if(ans[i]%2 == 0){
            res++;
        }
    }

    cout << res << "\n";
      
    return 0;
}