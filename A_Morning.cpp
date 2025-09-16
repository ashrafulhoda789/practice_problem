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
        string s;
        cin >> s;

        int ans = 0, p = 1, n = s.size();
        for(int i = 0; i < n; i++){
            int v = s[i] - '0';
            if(v == 0){
                v = 10;
            }

            ans += abs(v-p)+1;
            p = v;
        }

        cout << ans << "\n";
    
    }
      
    return 0;
}