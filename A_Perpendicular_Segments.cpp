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
        int a,b,k;
        cin >> a >> b >> k;

        if(k <=  min(a,b)){
            cout << 0 << " " << 0 << " " << a << " " << 0 << "\n";
            cout << 0 << " " << 0 << " " << 0 << " " << b << "\n";
        }else{
            int mn = min(a,b);

            cout << 0 << " " << mn << " " << mn << " " << 0 << "\n";
            cout << 0 << " " << 0 << " " << mn << " " << mn << "\n";
        }
        
    }
      
    return 0;
}