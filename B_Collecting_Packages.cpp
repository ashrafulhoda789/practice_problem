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

        vector<pair<int,int>> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(),v.end());
        string ans = "";
        int x = 0, y = 0;
        bool ok = true;
        for(int i = 0; i < n; i++){
            int px = v[i].first;
            int py = v[i].second;
            while(x < px){
                x++;
                ans += 'R';
            }

            if(py < y){
                ok = false;
                break;
            }

            while(y < py){
                y++;
                ans += 'U';
            }
        }

        if(!ok){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            for(auto i : ans){
                cout << i;
            }
            cout << "\n";
        }
    
    }
      
    return 0;
}