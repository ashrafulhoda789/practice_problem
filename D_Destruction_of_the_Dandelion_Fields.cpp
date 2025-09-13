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

        vector<int> v(n),odd;
        ll even = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i]%2 == 0){
                even += v[i];
            }
            else{
                odd.push_back(v[i]);
            }
        }

        if(odd.empty()){
            cout << 0 << "\n";
            continue;
        }

        sort(odd.rbegin(),odd.rend());

        int sz = odd.size();
        int t = (sz+1)/2;
        ll sum = 0;
        for(int i = 0; i < t; i++){
            sum += odd[i];
        }

        ll res = even + sum;
        cout << res << "\n";
    
    }
      
    return 0;
}