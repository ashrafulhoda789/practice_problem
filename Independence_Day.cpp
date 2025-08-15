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

    if(t <= 15){
        cout << 15 - t << "\n";
    }
    else{
        cout << -1 << "\n";
    }
      
    return 0;
}