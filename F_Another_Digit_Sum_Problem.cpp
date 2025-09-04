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
        string s;
        cin >> s;

        int even = 1,odd = 0;
        int r = 0,ans = 0;

        for(auto i : s){
            int d = i - '0';
            r = (r + d)%2;
            if(r == 0){
                ans += even;
                even++;
            }
            else{
                ans += odd;
                odd++;
            }
        }
        
        cout << ans << "\n";
    }
      
    return 0;
}