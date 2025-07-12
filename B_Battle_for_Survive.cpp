#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int p = n-2,i=p-1;
        while(i >= 0){
            v[p] -= v[i];
            i--;
        }

        cout << v[n-1]-v[p] << "\n";
        
    }
      
    return 0;
}