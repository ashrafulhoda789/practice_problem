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

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        bool ok = true;
        for(int i = n; i >= 1; i--){
            bool f = false;
            for(int j = 0; i+j <= n; j++){
                bool p = true;
                for(int k = j; k < i+j; k++){
                    if(v[k] <= 0){
                        p = false;
                        break;
                    }
                }
                if(p){
                    for(int k = j; k < i + j; k++){
                        v[k]--;
                    }
                    f = true;
                    break;
                }
            }
            if(!f){
                ok = false;
            }
        }

        if(ok){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    
    }

      
    return 0;
}