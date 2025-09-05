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
ll a[maxN],t[4*maxN];

void build(int n, int b, int e){

    if(b == e){
        t[n] = a[b];
        return;
    }

    int mid = (b+e)/2;
    int l = 2*n, r = 2*n+1;
    build(l,b,mid);
    build(r,mid+1,e);

    t[n] = t[l] + t[r];
}

void update(int n, int b, int e, int i, int x){

    if(e < i || b > i) return;

    if(b == e){
        t[n] = x;
        return;
    }

    int mid = (b+e)/2;
    int l = 2*n, r = 2*n+1;
    update(l,b,mid,i,x);
    update(r,mid+1,e,i,x);

    t[n] = t[l] + t[r];
}

ll query(int n, int b, int e, int i, int j){

    if(e < i || b > j) return 0;

    if(b >= i && e <= j){
        return t[n];
    }

    int mid = (b+e)/2;
    int l = 2*n, r = 2*n+1;

    return query(l,b,mid,i,j) + query(r,mid+1,e,i,j);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,m;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    build(1,1,n);

    while(m--){
        int t;
        cin >> t;

        if(t == 1){
            int idx,v;
            cin >> idx >> v;
            idx++;
            update(1,1,n,idx,v);
        }
        else{
            int l,r;
            cin >> l >> r;
            l++;
            ll ans = query(1,1,n,l,r);
            cout << ans << "\n";
        }
    
    }
      
    return 0;
}