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

        vector<int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        int cnt = 0;
        for(auto it : mp){
            cnt = max(cnt,it.second);
        }
        
        ll ans = 0;
        while(cnt < n){
            int d = min(n-cnt,cnt);
            ans += 1+d;
            cnt += d;
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}