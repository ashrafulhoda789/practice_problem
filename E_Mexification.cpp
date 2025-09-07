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

vector<int> find(vector<int>& a){
    int n = a.size();
    vector<int> fre(n+2, 0);
    for(auto i : a){
        if(i <= n+1){
            fre[i]++;
        }
    }

    int mex = 0;
    while(fre[mex] > 0){
        mex++;
    }

    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        if(a[i] < mex && fre[a[i]] == 1){
            ans[i] = a[i];
        }
        else ans[i] = mex;
    }

    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        vector<int> a = find(v);
        if(k == 1){
            ll sum = 0;
            for(int i = 0; i < a.size(); i++){
                sum += a[i];
            }
            cout << sum << "\n";
            continue;
        }

        vector<int> b = find(a);
        if(k == 2 || a == b){
            ll sum = 0;
            for(int i = 0; i < b.size(); i++){
                sum += b[i];
            }
            cout << sum << "\n";
            continue;
        }

        vector<int> c = find(b);
        if(c == b){
            ll sum = 0;
            for(int i = 0; i < b.size(); i++){
                sum += b[i];
            }
            cout << sum << "\n";
        }
        else{
            if(k%2 == 0){
                ll sum = 0;
                for(int i = 0; i < b.size(); i++){
                    sum += b[i];
                }
                cout << sum << "\n";
            }
            else{
                ll sum = 0;
                for(int i = 0; i < c.size(); i++){
                    sum += c[i];
                }
                cout << sum << "\n";
            }
        }
    }
      
    return 0;
}