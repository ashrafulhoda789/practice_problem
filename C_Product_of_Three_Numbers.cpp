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
        ll n;
        cin >> n;

        ll a = -1, b = -1, c = -1;

        for(ll i = 2; i*i <= n; i++){
            if(n%i == 0){
                a = i;
                n /= i;
                break;
            }
        }

        if(a != -1){
            for(ll i = 2; i*i <= n; i++){
                if(n%i == 0 && i != a){
                    b = i;
                    n /= i;
                    break;
                }
            }
        }

        if(a != -1 && b != -1 && n > 1 && n != a && n != b){
            c = n;

            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        }
        else{
            cout << "NO\n";
        }
          
    }
      
    return 0;
}