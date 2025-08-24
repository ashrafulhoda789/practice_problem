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
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        set<int> s;
        bool ok = false;

        for(int i=0; i<n; i++){
            if(s.count(v[i])){
                ok = true;
                break;
            }
           
            s.insert(v[i]);
            
        }
        
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
      
    return 0;
}