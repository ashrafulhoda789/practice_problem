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
        int n,m;
        cin >> n >> m;

        vector<int> v;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;

            int sz = s.size();
            v.push_back(sz);
        }

        ll sum = 0,cnt = 0;
        for(int i = 0; i < v.size(); i++){
            sum += v[i];
            if(sum <= m){
                cnt++;
            }
            else{
                break;
            }
        }

        cout << cnt << "\n";
    
    }
      
    return 0;
}