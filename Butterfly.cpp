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
        int r,g,b;
        cin >> r >> g >> b;

        vector<int> v = {r,g,b};
        sort(v.begin(),v.end());

        int sum = v[0] + v[1];

        if(sum >= v[2]){
            cout << "YES\n";
        }
        else cout << "NO\n";
        
    }
      
    return 0;
}