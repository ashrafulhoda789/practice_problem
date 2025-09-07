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
        int k,x;
        cin >> k >> x;

        ll n = x;

        for(int i = 0; i < k; i++){
            if(n%2 == 0){
                n = n*2;
            }
            else{
                if((n-1)%3 == 0){
                    ll p = (n-1)/3;
                    if(p > 0 && p%2 == 1){
                        n = p;
                    }
                    else{
                        n = n*2;
                    }
                }
                else{
                    n = n*2;
                }
            }
        }

        cout << n << "\n";
    
    }
      
    return 0;
}