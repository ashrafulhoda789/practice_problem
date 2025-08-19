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

        vector<int> v(n+1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        int even = 0, odd = 0;
        for(int i=1; i<=n; i+=2){
            if(v[i]%2 == 0){
                even++;
            }
            else odd++;
        }

        if(even > 0 && odd > 0){
            cout << "NO\n";
            continue;
        }

        int e = 0, od = 0;
        for(int i=2; i<=n; i+=2){
            if(v[i]%2 == 0){
                e++;
            }
            else od++;
        }

        if(e > 0 && od > 0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
        
    }
      
    return 0;
}