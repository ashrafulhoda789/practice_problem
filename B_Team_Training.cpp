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
        int n,x;
        cin >> n >> x;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        int e = n;
        for(int i=0; i<n; i++){
            if(v[i] >= x){
                e--;
            }
        }

        //cout << e << "\n";
        int sz = 0,ans = 0;

        for(int i= e-1; i >= 0; i--){
            sz++;
            if(v[i]*sz >= x){
                ans++;
                sz = 0;
            }
        }
        cout << ans + (n-e) << "\n";
        
    }
      
    return 0;
}