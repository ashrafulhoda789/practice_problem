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
        int n,k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        vector<int> a = v;
        sort(a.begin(),a.end());

        auto it = unique(a.begin(),a.end());
        a.erase(it,a.end());

        int m = a.size();
        map<int,int> mp;
        for(int i = 0; i < m; i++){
            mp[a[i]] = i;
        }

        vector<int> fre(m,0);
        for(int i = 0; i < n; i++){
            fre[mp[v[i]]]++;
        }

        bool ok = false;
        vector<int> r(m,0);
        for(int i = 0; i < m; i++){
            if(fre[i]%k != 0){
                ok = true;
                break;
            }

            r[i] = fre[i] / k;
        }

        if(ok){
            cout << 0 << "\n";
            continue;
        }

        vector<int> cur(m,0);
        int cnt = 0,l=0;
        ll ans = 0;
        for(int i = 0; i < n; i++){
            int idx = mp[v[i]];
            cur[idx]++;
            if(cur[idx] == r[idx] + 1){
                cnt++;
            }

            while(cnt > 0){
                int il = mp[v[l]];
                if(cur[il] == r[il] + 1){
                    cnt--;
                }
                cur[il]--;
                l++;
            }

            ans += (i-l + 1);
        }

        cout << ans << "\n";
    
    }
      
    return 0;
}