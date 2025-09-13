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
        int n,m;
        cin >> n >> m;

        vector<int> a(n+1),b(n+1);
        a[0] = 0;
        b[0] = 0;

        for(int i = 1; i <= n; i++){
            cin >> a[i] >> b[i];
        }

        ll ans = 0;
        for(int i = 0; i < n; i++){
            ll r = a[i+1] - a[i];
            if(b[i] == b[i+1]){
                ans += (r/2)*2;
            }
            else{
                if(r%2 == 1){
                    ans += r;
                }
                else{
                    ans += r - 1;
                }
            }
            
        }

        ans += (m - a[n]);
        cout << ans << "\n";
        
    
    }
      
    return 0;
}