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
        int n,m,x,y;
        cin >> n >> m >> x >> y;

        int cnt1 = 0, cnt2 = 0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];

            if(a[i] < y){
                cnt1++;
            }
        }

        vector<int> b(m);
        for(int i=0; i<m; i++){
            cin >> b[i];

            if(b[i] < x){
                cnt2++;
            }
        }

        cout << cnt1+cnt2 << "\n";

    
    }
      
    return 0;
}