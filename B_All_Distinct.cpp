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

        vector<int> v(n);
        set<int> s;
        for(int i=0; i<n; i++){
            cin >> v[i];
            s.insert(v[i]);
        }

        int sz = s.size();
        int p = n - sz;
        if(p%2 == 0){
            cout << sz << "\n"; 
        }
        else{
            cout << sz - 1 << "\n";
        }
        
    }
      
    return 0;
}