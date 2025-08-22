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
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        int cnt = 0;

        if(a < b){
            cnt++;
        }
        if(a < c){
            cnt++;
        }
        if(a < d){
            cnt++;
        }

        cout << cnt << "\n";
        
    }
      
    return 0;
}