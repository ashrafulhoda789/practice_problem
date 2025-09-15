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
const ll MOD = 998244353;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        vector<ll> pre(2);
        pre[0] = 1, pre[1] = 1;

        for(int i = 1; i < n; i++){
            vector<ll> cur = {0,0};
            for(int j = 0; j < 2; j++){
                if(pre[j] == 0){
                    continue;
                }
                
                int pa,pb;
                if(j == 0){
                    pa = a[i-1];
                    pb = b[i-1];
                }
                else{
                    pa = b[i-1];
                    pb = a[i-1];
                }

                for(int k = 0; k<2; k++){
                    int ca,cb;
                    if(k == 0){
                        ca = a[i];
                        cb = b[i];
                    }
                    else{
                        ca = b[i];
                        cb = a[i];
                    }

                    if(ca >= pa && cb >= pb){
                        cur[k] += pre[j];
                        if(cur[k] >= MOD){
                            cur[k] -= MOD;
                        }
                    }
                }
            }

            pre[0] = cur[0];
            pre[1] = cur[1];
        }

        ll ans = (pre[0] + pre[1])%MOD;
        cout << ans << "\n";
    
    }
      
    return 0;
}