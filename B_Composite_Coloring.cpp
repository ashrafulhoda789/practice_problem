#include<bits/stdc++.h>
using namespace std;
vector<int> allPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
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

        map<int,vector<int>> mp;
        for(int i=0; i<n; i++){
            for(int j=0; j < 11; j++){
                if(v[i] % allPrimes[j] == 0){
                    mp[allPrimes[j]].push_back(i);
                    break;
                }
            }
        }

        vector<int> ans(n);
        int color = 1;
        for(auto i : mp){
            for(auto val : i.second){
                ans[val] = color;
            }
            color++;
            
        }

        cout << mp.size() << "\n";
        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        
    }
      
    return 0;
}