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

        vector<pair<int,int>> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i].first >> v[i].second;
        }

        long long ans = 0;
        for(int i=1; i<n; i++){
            ans += v[i].first + v[i].second;
            //cout << ans << "\n";
        }

        cout << 2 * ans + 4*m << "\n";
        
    }
      
    return 0;
}