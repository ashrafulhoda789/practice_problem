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

        map<int,int> mp;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        int ans = 0;
        for(auto i : mp){
            ans += i.second / 2;
        }

        cout << ans << "\n";
    }
      
    return 0;
}