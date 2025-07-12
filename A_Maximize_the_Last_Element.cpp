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
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int ans = 0;
        for(int i=1; i<=n; i+= 2){
            ans = max(ans,v[i]);
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}