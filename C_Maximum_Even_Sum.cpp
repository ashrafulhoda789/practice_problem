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
        ll a,b;
        cin >> a >> b;

        if(b%2 == 1){
            if(a%2 == 1){
                ll res = a*b+1;
                cout << res << "\n";
            }
            else{
                cout << -1 << "\n";
            }
        }
        else{
            ll tmp = b;
            ll s = 0;
            while(tmp%2 == 0){
                tmp >>= 1;
                s++;
            }
            if((a%2 == 1) && s == 1){
                cout << -1 << "\n";
            } else {
                ll k = (b/2); 
                ll res = a * k + 2;
                cout << res << "\n";
            }
        }
    
    }
      
    return 0;
}
