/* Author: Ashraful Hoda Jamshed */
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T, null_type, less_equal<T>, 
        rb_tree_tag,tree_order_statistics_node_update>; 

#define ll long long
const int maxN = 2e5 + 9;
ll a[maxN], t[maxN * 4],m;

void build(ll n, ll b, ll e){

    if(b == e){
        t[n] = (a[b]%m);
        return;
    }

    ll mid = b + (e - b)/2, l = 2*n, r = 2*n+1;
    build(l,b,mid);
    build(r,mid+1,e);

    t[n] = (t[l]*t[r])%m;
}

void update(ll n, ll b, ll e, ll i){

    if(b == e){
        t[n] = 1;
        return;
    }

    ll mid = b + (e - b)/2, l = 2*n, r = 2*n+1;
    if(i <= mid){
        update(l,b,mid,i);
    }
    else{
        update(r,mid+1,e,i);
    }

    t[n] = (t[l]*t[r])%m;

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int tt;
    cin >> tt;

    while(tt--){
        ll n;
        cin >> n >> m;

        for(int i=1; i<=n; i++){
            cin >> a[i];
        }

        string s;
        cin >> s;

        build(1,1,n);

        ll l = 1, r = n;
        for(int i = 0; i < n; i++){

            cout << t[1] << " ";

            if(s[i] == 'L'){
                update(1,1,n,l);
                l++;
            }
            else if(s[i] == 'R'){
                update(1,1,n,r);
                r--;
            }
        }
        cout << "\n";
    
    }
      
    return 0;
}