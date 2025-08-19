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
        int n;
        cin >> n;

        if(n <= 1399){
            cout << "Division 4\n";
        }
        else if(n >= 1400 && n <= 1599){
            cout << "Division 3\n";
        }
        else if(n >= 1600 && n <= 1899){
            cout << "Division 2\n";
        }else{
            cout << "Division 1\n";
        }
        
    }
      
    return 0;
}