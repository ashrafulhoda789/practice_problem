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
        int a,b,c,n;
        cin >> a >> b >> c >> n;


        vector<int> v = {a,b,c};
        int mx = *max_element(v.begin(),v.end());

        int tmp = n;
        sort(v.begin(),v.end());
        bool ok = true;
        for(int i = 0; i < v.size(); i++){
            int diff = mx - v[i];
            if(diff > tmp){
                ok = false;
                break;
            }

            tmp = tmp - diff;
        }

        //cout << tmp << "\n";
        if(ok){
            if(tmp%3 == 0){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        else cout << "NO\n";
    
    }
      
    return 0;
}