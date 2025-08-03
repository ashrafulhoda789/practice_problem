#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 2e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);
vector<int> a(maxN);
int m,ans = 0;

void dfs(int u, int p, int cnt){
    if(a[u]) cnt++;
    else cnt = 0;

    if(cnt > m) return;
    
    bool ok = true;
    for(auto v : g[u]){
        if(v == p) continue;
        ok = false;
        dfs(v,u,cnt);
    }

    if(ok) ans++;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    for(int i=1; i<n; i++){
        int u,v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1,-1,0);

    cout << ans << "\n";
      
    return 0;
}