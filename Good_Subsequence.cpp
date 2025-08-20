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

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int pre = v[0]%2;
        int ans = 1;
        for(int i=1; i<n; i++){
            int p = v[i]%2;

            if(p != pre){
                ans++;
                pre = p;
            }
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}