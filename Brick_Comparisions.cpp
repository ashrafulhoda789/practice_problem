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

        vector<int> v(n+1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        int mx_idx = 1,mx = v[1];
        for(int i=2; i<=n; i++){
            if(mx < v[i]){
                mx = v[i];
                mx_idx = i;
            }
        }

        cout << mx_idx << "\n";
        
    }
      
    return 0;
}