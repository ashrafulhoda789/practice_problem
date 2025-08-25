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
        int n;
        cin >> n;

        vector<vector<char>> v(n,vector<char>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> v[i][j];
            }
        }

        vector<int> cnt(n,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(v[i][j] == '1'){
                    cnt[i]++;
                }
            }

        }

        bool ok = true;
        for(int i=0; i<n-1; i++){
            // cout << cnt[i] << "\n";
            if(cnt[i] == 0) continue;

            if(cnt[i] != cnt[i+1]){
                ok = false;
                break;
            }
        }

        if(ok) cout << "SQUARE\n";
        else cout << "TRIANGLE\n";
        
    }
      
    return 0;
}