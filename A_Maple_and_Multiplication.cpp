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
        int a,b;
        cin >> a >> b;
        
        if(a == b){
            cout << "0\n";
            
        }
        else if(a%b == 0 || b%a == 0){
            cout << 1 << "\n";
        }
        else{
            cout << 2 << "\n";
        }

         
    
    }
      
    return 0;
}