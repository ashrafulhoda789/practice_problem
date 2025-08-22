#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
//vector<bool> vis(maxN);

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

        vector<bool> vis(26,false);
        int cnt = 0;
        for(int i=0; i<n; i++){
            int idx = s[i] - 'A';
            if(!vis[idx]){
                cnt += 2;
                vis[idx] = true;
            }
            else{
                cnt += 1;
            }
        }

        cout << cnt << "\n";
    }
      
    return 0;
}