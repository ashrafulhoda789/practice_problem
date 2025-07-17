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
        
        vector<pair<int,int>> a(n);
        
        for(auto &i : a){
            cin >> i.first >> i.second;
        }
        
        sort(a.begin(),a.end());
        
        
        pbds<int> p;
        long long sum = 0;
        
        for(auto i : a){
    
            int b = i.second;
            
            sum += (long long)p.size() - p.order_of_key(b);
            p.insert(b);
        } 
        
        cout << sum << "\n";
    }
        
       

      
    return 0;
}