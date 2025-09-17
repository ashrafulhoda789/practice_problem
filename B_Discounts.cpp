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
        int n,k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<int> b(k);
        for(int i=0; i<k; i++){
            cin >> b[i];
        }

        sort(a.rbegin(),a.rend());
        sort(b.begin(),b.end());

        vector<ll> pre(n+1,0);
        for(int i = 0; i < n; i++){
            pre[i+1] = pre[i] + a[i];
        }

        ll ans = 0;
        int idx = 0;
        for(int i = 0; i < k; i++){
            if(idx + b[i] <= n){
                ans += pre[idx + (b[i]-1)] - pre[idx];
                idx += b[i];
            }
            else{
                break;
            }
        }

        if(idx < n){
            ans += pre[n] - pre[idx];
        }

        cout << ans << "\n";
    
    }
      
    return 0;
}