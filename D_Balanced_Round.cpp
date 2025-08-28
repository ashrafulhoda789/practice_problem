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

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        int i=0,mx = 0;
        while(i < n){
            int cnt = 1,j=i;
            while(j < n-1 && v[j+1]-v[j] <= k){
                j++;
                cnt++;
            }

            mx = max(mx,cnt);
            i = j+1;
        }

        cout << n - mx << "\n";
        
    }
      
    return 0;
}