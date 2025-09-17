/* Author: Ashraful Hoda Jamshed */
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T, null_type, less_equal<T>, 
        rb_tree_tag,tree_order_statistics_node_update>; 

#define ll long long
const int maxN = 1e5 + 9;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<vector<int>> g(n+1);
        vector<int> fre(n+1,0);

        for(int i = 0; i < n-1; i++){
            int u,v;
            ll x,y;
            cin >> u >> v >> x >> y;

            if(x > y){
                g[u].push_back(v);
                fre[v]++;
            }
            else if(y > x){
                g[v].push_back(u);
                fre[u]++;
            }
        }

        deque<int> q;
        for(int i = 1; i <= n; i++){
            if(fre[i] == 0){
                q.push_back(i);
            }
        }

        vector<int> v;
        while(!q.empty()){
            int u = q.front();
            q.pop_front();

            v.push_back(u);
            for(auto i : g[u]){
                int k = --fre[i];
                if(k == 0){
                    q.push_back(i);
                }
            }
        }

        vector<int> ans(n+1);
        for(int i = 0; i < n; i++){
            ans[v[i]] = n-i;
        }

        for(int i = 1; i <= n; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    
    }
      
    return 0;
}