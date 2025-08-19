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
        cin >>  n;

        vector<int> a;
        for(int i=1; i<=n; i++){
            int x;
            cin >> x;

            if(x != -1) a.push_back(x);
        }

        if(a.size() > 0 && a[0] == 0){
            cout << "NO\n";
            continue;
        }

        bool ok = true;
        for(int i=1; i<a.size(); i++){
            if(a[i] != a[i-1]){
                ok = false;
                break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
        
    }
      
    return 0;
}