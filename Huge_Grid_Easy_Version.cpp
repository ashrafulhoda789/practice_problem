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

        string s;
        cin >> s;

        int cnt = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                cnt++;
            }
        }

        int f = s[0] - '0';
        int l = s[n-1] - '0';

        //cout << f << " " << l << "\n";
        int res = 3*cnt - (f+l);
        cout << res << "\n";
        
    }
      
    return 0;
}