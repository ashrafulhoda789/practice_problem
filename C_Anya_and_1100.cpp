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

        int n = s.size();

        int q;
        cin >> q;

        string a = "1100";

        int cnt = 0;
        for(int i=0; i<n-3; i++){
            if(s.substr(i,4) == a) cnt++;
        }

        for(int i=0; i<q; i++){
            int idx,v;
            cin >> idx >> v;
            idx--;

            for(int j=idx-3; j <= idx; j++){
                if(j >= 0 && j < n-3 && s.substr(j,4) == a) cnt--;
            }

            s[idx] = v + '0';

            for(int j=idx-3; j <= idx; j++){
                if(j >= 0 && j < n-3 && s.substr(j,4) == a) cnt++;
            }

            if(cnt > 0){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        
    }
      
    return 0;
}