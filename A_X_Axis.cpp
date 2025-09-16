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
        int x1,x2,x3;
        cin >> x1 >> x2 >> x3;

        vector<int> v = {x1,x2,x3};
        sort(v.begin(),v.end());

        int a = v[1];
        int res = abs(v[0]-a) + abs(v[2]-a);

        cout << res << "\n";
    
    }
      
    return 0;
}