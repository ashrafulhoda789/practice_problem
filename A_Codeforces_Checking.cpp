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
        char ch;
        cin >> ch;

        string s = "codeforces";

        if(s.find(ch) != string::npos){
            cout << "YES\n";
        }
        else cout << "NO\n";
        
    }
      
    return 0;
}