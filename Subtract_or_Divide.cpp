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

        int ans = 0;
        if(n%2 != 0){
            ans = (n+1)/2;
        }
        else{
            ans = n - (n/4);
        }
        
        cout << ans << "\n";
    }
      
    return 0;
}

