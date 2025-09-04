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

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        int ans = 0;
        for(int i=0; i<n-1; i++){
            ans += max(0,(a[i]-b[i+1]));
        }

        ans += a[n-1];
        cout << ans << "\n";
        
    }
      
    return 0;
}