#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    string s;
    cin >> s;

    if((s[0] == 'c' || s[0] == 'a' || s[0] == 't') && (s[1] == 'c' || s[1] == 'a' || s[1] == 't') && (s[2] == 'c' || s[2] == 'a' || s[2] == 't')){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
      
    return 0;
}