/* Author: Ashraful Hoda Jamshed */
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T, null_type, less_equal<T>, 
        rb_tree_tag,tree_order_statistics_node_update>; 

#define ll long long
const int maxN = (1 << 17) + 9;
ll a[maxN],t[4*maxN];

ll merge(int ans_l, int ans_r, int len){
    int pw = 0;
    pw = __lg(len);

    if(pw & 1){
        return ans_l | ans_r;
    }
    else{
        return ans_l ^ ans_r;
    }
}

void build(int n, int b, int e){

    if(b == e){
        t[n] = a[b];
        return;
    }
    
    int mid = (b+e)/2;
    int l = 2*n, r = 2*n+1;
    build(l,b,mid);
    build(r,mid+1,e);

    t[n] = merge(t[l],t[r], e-b+1);
}

void update(int n, int  b, int e, int i, int x){

    if(e < i || b > i){
        return;
    }

    if(b == e){
        t[n] = x;
        return;
    }
    
    int mid = (b+e)/2;
    int l = 2*n, r = 2*n+1;
    update(l,b,mid,i,x);
    update(r,mid+1,e,i,x);

    t[n] = merge(t[l],t[r], e-b+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,m;
    cin >> n >> m;

    n = (1 << n);
    
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    build(1,1,n);

    while(m--){
        int idx, v;
        cin >> idx >> v;

        update(1,1,n,idx,v);

        cout << t[1] << "\n";
    }
      
    return 0;
}