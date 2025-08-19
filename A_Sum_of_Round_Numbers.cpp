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

        int tmp = n;
        ll sz = 1;
        vector<ll> ans;
        while(tmp > 0){
            int r = tmp%10;
            if(r != 0){
                ans.push_back(r*sz);
            }

            tmp /= 10;
            sz *= 10;
        }
        
        cout << ans.size() << "\n";
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
      
    return 0;
}