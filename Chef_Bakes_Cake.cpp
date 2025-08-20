#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,x,y;
    cin >> n >> x >> y;

    int f = y/x;

    int res = (n + f - 1)/f;
    cout << res << "\n";
      
    return 0;
}