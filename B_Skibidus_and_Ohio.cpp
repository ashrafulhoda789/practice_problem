#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.size(),cnt = 0;
        
        for(int i=0; i<n; i++){
            if(s[i] == s[i+1]){
                cnt++;
            }
        }

        if(cnt == 0) cout << n << "\n";
        else cout << 1 << "\n";
        
    }
      
    return 0;
}