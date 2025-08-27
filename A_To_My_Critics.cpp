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
        int a,b,c;
        cin >> a >> b >> c;

        vector<int> v = {a,b,c};
        sort(v.begin(),v.end());

        int sum = v[1] + v[2];

        if(sum >= 10){
            cout << "YES\n";
        }
        else cout << "NO\n";
        
    }
      
    return 0;
}