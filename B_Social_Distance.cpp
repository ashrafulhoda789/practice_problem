#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.rbegin(),v.rend());
        long long sum = 0;
        for(int i=1; i<n-1; i++){
            sum += v[i];
        }

        sum += v[0]*2 + n;
        if(sum > m) cout << "NO\n";
        else cout << "YES\n";
        
    }
      
    return 0;
}