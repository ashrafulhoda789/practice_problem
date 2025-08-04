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
        int n,k;
        cin >> n >> k;

        vector<int> v(k+1);
        for(int i=1; i <= k; i++){
            int b,c;
            cin >> b >> c;

            v[b] += c;
        }
        
        sort(v.rbegin(),v.rend());

        ll sum = 0;
        for(int i=0; i< min(n,k+1); i++){
            sum += v[i];
        }

        cout << sum << "\n";
        
    }
      
    return 0;
}