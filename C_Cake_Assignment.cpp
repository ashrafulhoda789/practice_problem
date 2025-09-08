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
        int k;
        ll x;
        cin >> k >> x;

        ll total = 1LL << (k+1);
        ll mid = 1LL << k;

        ll cur = x;
        vector<int> v;

        while( cur != mid){
            if(cur <= mid){
                v.push_back(1);
                cur *= 2;
            }
            else{
                v.push_back(2);
                cur = cur*2 - total;
            }
        }

        reverse(v.begin(),v.end());
        cout << v.size() << "\n";

        if(v.empty()){
            cout << "\n";
        }
        else{
            
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            }
            cout << "\n";
        }
    
    }
      
    return 0;
}