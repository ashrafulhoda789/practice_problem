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

        vector<int> v(n+1),zero;
        vector<bool> p(n+1,false);
        for(int i=1; i<=n; i++){
            cin >> v[i];
            if(v[i] == 0){
                zero.push_back(i);
            }
            else{
                p[v[i]] = true;
            }
        }

        vector<int> n_p;
        for(int i = 1; i <= n; i++){
            if(!p[i]){
                n_p.push_back(i);
            }
        }

        if(!zero.empty()){
            int sz = zero.size();
            vector<int> a = n_p;
            if(sz == 1){
                v[zero[0]] = a[0];
            }
            else{
                for(int i = 0; i+1 < sz; i++){
                    if(a[i] == zero[i]){
                        swap(a[i],a[i+1]);
                    }
                }

                if(a[sz-1] == zero[sz-1]){
                    swap(a[sz-1],a[0]);
                }

                for(int i = 0; i < sz; i++){
                    v[zero[i]] = a[i];
                }
            }
        }

        int l = 1;
        while(l <= n && v[l] == l){
            l++;
        }

        if(l > n){
            cout << 0 << "\n";
            continue;
        }

        int r = n;
        while(r >= 1 && v[r] == r){
            r--;
        }
        
        cout << (r-l)+1 << "\n";
    }
      
    return 0;
}