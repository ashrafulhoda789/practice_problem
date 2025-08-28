#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

bool ok(int x,int y){
    if(x < 0 || y < 0){
        return false;
    }
       
    int mn = min(x,y);
    int mx = max(x,y);

    return mx <= 2*(mn+1);
       
        
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if(c < a || d < b){
            cout << "NO\n";
            continue;
        }

        int x = c - a;
        int y = d - b;

        if(ok(a,b) && ok(x,y)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
      
    return 0;
}