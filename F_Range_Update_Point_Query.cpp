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
ll a[maxN],t[maxN * 4];

void build(int n, int b, int e){

    if(b == e){
        t[n] = a[b];
        return;
    }

    int mid = (b+e)/2;
    int l = 2*n, r = 2*n+1;
    build(l,b,mid);
    build(r,mid+1,e);

    t[n] = max(t[l],t[r]);
}

void update(int n, int b, int e, int i, int j){

    if(e < i || b > j) return;
    if(t[n] < 10) return;
    else if(b == e){
        string s = to_string(t[n]);
        ll sum = 0;
        for(int i = 0; i < s.size(); i++){
            sum += (s[i] - '0');
        }
        t[n] = sum;
        return;
    }

    int mid = (b+e)/2;
    int l = 2*n, r = 2*n+1;
    update(l,b,mid,i,j);
    update(r,mid+1,e,i,j);

    t[n] = max(t[l],t[r]);

}

void query(int n, int b, int e, int x){

    if(e < x || b > x) return;

    if(b == e){
        cout << t[n] << "\n";
        return;
    }

    int mid = (b+e)/2;
    int l = 2*n, r = 2*n+1;

    query(l,b,mid,x), query(r,mid+1,e,x);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        
        build(1,1,n);

        while(m--){
            int q;
            cin >> q;

            if(q==1){
                int l,r;
                cin >> l >> r;

                update(1,1,n,l,r);
            }
            else{
                int idx;
                cin >> idx;

                query(1,1,n,idx);
            }
        }
    }
      
    return 0;
}