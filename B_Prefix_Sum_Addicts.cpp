#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k;

        vector<ll> v(k),pre(n);
        for(int i=0; i<k; i++){
            cin >> v[i];
        }

        if(k==1){
            cout << "Yes\n";
            continue;
        }

        ll p = n-1;
        for(int i=k-1; i>=1; i--){
            pre[p] = v[i]-v[i-1];
            p--;
        }

        while(p >= 0){
            pre[p] = pre[p+1];
            v[0] -= pre[p];
            p--;
        }

        pre[0] += v[0];
        bool sorted = true;

        for(int i=0; i<pre.size()-1; i++){
            if(pre[i] > pre[i+1]){
                sorted = false;
                break;
            }
        }

        if(sorted)cout << "Yes\n";
        else cout << "No\n";
        
    }
      
    return 0;
}