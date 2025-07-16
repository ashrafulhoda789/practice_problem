#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

using namespace std;

template<typename T> using pbds = tree<T, null_type, less<T>, 
        rb_tree_tag,tree_order_statistics_node_update>; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
        int n;
        cin >> n;
    
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        
        vector<int> left(n),right(n);
        pbds<int> left_p, right_p;
        for(int i=0; i<n; i++){
            left[i] = left_p.size() - left_p.order_of_key(v[i]);
            left_p.insert(v[i]);
        }
        
        // for(auto i : left){
        //     cout << i << " ";
        // }
        // cout << "\n";
        
        for(int i=n-1; i>=0; i--){
            right[i] = right_p.order_of_key(v[i]);
            right_p.insert(v[i]);
        }
        
        // for(auto i : right){
        //     cout << i << " ";
        // }
        
        long long sum = 0;

        for(int i=0; i<n; i++){
          sum += 1LL * left[i] * right[i];

        }
        cout << sum << "\n";

      
    return 0;
}