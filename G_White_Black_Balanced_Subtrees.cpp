#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n+1);
        v[1] = 0;
        for(int i=2; i<=n; i++){
            cin >> v[i];
        }

        string s;
        cin >> s;

        vector<pair<int,int>> cnt(n+1);  
        for(int i=1; i<=n; i++){            
            if(s[i-1] == 'W') cnt[i] = {1,0};
            else cnt[i] = {0,1};
        }

        // for(auto i : cnt){
        //     cout << i.first << " " << i.second << "\n";
        // }
         /*
            0 1 - 1
            1 0 - 2
            0 1 - 3
            1 0 - 4
            0 1 - 5
            1 0 - 6
            0 1 - 7
            1 0 - 8
        */

        for(int i = n; i >= 2; i--){
            int par = v[i];
            cnt[par].first += cnt[i].first;
            cnt[par].second += cnt[i].second;
        }

        int ans = 0;
        for(int i=1; i<=n; i++){
            if(cnt[i].first == cnt[i].second){
                ans++;
            }
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}