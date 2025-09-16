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

        vector<int> v(n);
        ll p = 1;
        for(int i=0; i<n; i++){
            cin >> v[i];
            p *= v[i];
        }

        if(p%k == 0){
            cout << 0 << "\n";
            continue;
        }

        sort(v.begin(),v.end());
        int cnt = 0;
        for(int i = n-1; i >= 0; i--){
            cnt++;
            int r = v[i]+1;
            int mul = p/v[i];
            p = mul*r;

            if(p%k == 0){
                break;
            }
        }

        cout << cnt << "\n";
    }
      
    return 0;
}