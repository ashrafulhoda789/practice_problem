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

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        vector<vector<int>> a(n+1);
        bool ok = true;
        for(int i = 0; i < n; i++){
            a[v[i]].push_back(i);
        }

        vector<int> b(n,-1);
        int cur = 1;
        for(int i = 1; i <= n && ok; i++){
            auto vec = a[i];

            if(vec.empty())continue;

            if(vec.size() % i != 0){
                ok = false;
                break;
            }

            for(int j = 0; j < vec.size(); j += i){
                for(int k = 0; k<i; k++){
                    b[vec[j+k]] = cur;
                }
                cur++;
            }
        }

        if(!ok){
            cout << "-1\n";
        }
        else{
            for(int i = 0; i < n; i++){
                cout << b[i] << " ";
            }
            cout << "\n";
        }
    }
      
    return 0;
}