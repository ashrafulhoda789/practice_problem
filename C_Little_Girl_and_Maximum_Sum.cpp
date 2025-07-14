#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,q;
    cin >> n >> q;

    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }

    vector<int> d(n+2),pre(n+1);
    for(int i=1; i<=q; i++){
        int l,r;
        cin >> l >> r;

        d[l] += 1;
        d[r+1] -= 1; 
    }

    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1] + d[i];
    }

    sort(pre.begin(),pre.end());

    sort(v.begin(),v.end());

    long long sum = 0;
    for(int i=n; i>=1; i--){
        sum += (1LL * pre[i] * v[i]);
    }

    cout << sum << "\n";
      
    return 0;
}