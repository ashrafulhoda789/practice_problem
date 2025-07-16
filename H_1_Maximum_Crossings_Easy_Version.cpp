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
      
   int t;
   cin >> t;
   
   while(t--){
        int n;
        cin >> n;
    
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        
        pbds<pair<int,int>> p;
        long long sum = 0;

        for(int i=0; i<n; i++){
           
           sum += p.size() - p.order_of_key({v[i],-1});
           p.insert({v[i],i});
        }
        cout << sum << "\n";
   }
      
    return 0;
}