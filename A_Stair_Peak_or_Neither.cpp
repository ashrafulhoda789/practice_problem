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

        if(a < b && b < c){
            cout << "STAIR\n";
        }
        else if(a < b && b > c){
            cout << "PEAK\n";
        }
        else cout << "NONE\n";
        
    }
      
    return 0;
}