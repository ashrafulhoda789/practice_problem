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
        int x,y,z;
        cin >> x >> y >> z;

        int f = y-x;
        int l = z-y;

        if(f == l){
            cout << 0 << "\n";
        }
        else cout << 1 << "\n";
        
    }
      
    return 0;
}