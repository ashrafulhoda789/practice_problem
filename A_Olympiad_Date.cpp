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
        int zero = 0, one = 0, two = 0, three = 0, five = 0, ans = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        for(int i=0; i<n; i++){
            if(v[i] == 0) zero++;
            else if(v[i] == 1) one++;
            else if(v[i] == 2) two++;
            else if(v[i] == 3) three++;
            else if(v[i] == 5) five++;

            if(zero >= 3 && one >= 1 && two >= 2 && three >= 1 && five >= 1){
                ans = i+1;
                break;
            }
        }

        cout << ans << "\n";
    }
      
    return 0;
}