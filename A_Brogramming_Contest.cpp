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

        string s;
        cin >> s;

        int ans = 0;
        for(int i=1; i<n; i++){
            if(s[i] != s[i-1]) ans++;
        }

        if(s[0] == '1') ans++;
        
        cout << ans << "\n";
        
    }
      
    return 0;
}