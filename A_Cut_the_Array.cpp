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

        vector<int> v(n+1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        vector<int> pre(n+1);
        for(int i = 1; i <= n; i++){
            pre[i] = (pre[i-1] + v[i])%3;
        }

        bool ok = false;
        for(int i = 1; i < n ; i++){
            for(int j = i+1; j < n ; j++){
                int s1 = pre[i]%3;
                int s2 = (pre[j] - pre[i] + 3)%3;
                int s3 = (pre[n] - pre[j] + 3)%3;

                if(s1 == s2 && s2 == s3){
                    cout << i << " " << j << "\n";
                    ok = true;
                    break;
                }
                else if(s1 != s2 && s2 != s3 && s3 != s1){
                    cout << i << " " << j << "\n";
                    ok = true;
                    break;
                }
            }
            if(ok) break;
        }

        if(!ok){
            cout << "0 0\n";
        }
    
    }
      
    return 0;
}