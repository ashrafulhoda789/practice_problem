#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>

#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

using namespace std;

template < typename T > using pbds = tree < T, null_type, less < T > ,
    rb_tree_tag, tree_order_statistics_node_update > ;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector < int > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector < int > b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    vector<int> pre_a(n);
   
    for(int i=0; i<n; i++){
        pre_a[i] = a[i] - b[i];
    }
    
    
    pbds<pair<int,int>> p_a;
    long long sum = 0;
    
    for(int i=0; i<n; i++){
        
        int x = - pre_a[i];

        sum += (long long)p_a.size() - p_a.order_of_key({(x+1),-1});
        p_a.insert({pre_a[i],i});

    }
    

    cout << sum << "\n";

    return 0;
}