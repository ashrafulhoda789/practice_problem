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
        int x,y,r;
        cin >> x >> y >> r;

        int ex = r/30;
        int total = x + ex;

        if(total % y == 0){
            cout << total/y << "\n";
        }
        else{
            cout << (total/y) + 1 << "\n";
        }
        
    }
      
    return 0;
}