#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int x;
    cin >> x;

    int need = 25 - x;

    int q = need / 4;

    if(need % 4 == 0){
        cout << q << "\n";
    }
    else{
        cout << q + 1 << "\n";
    }
      
    return 0;
}