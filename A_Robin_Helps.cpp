#include<bits/stdc++.h>
using namespace std;

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

        int gold = 0,res = 0;
        for(int i=0; i<n; i++){
            if(v[i] == 0 && gold != 0){
                gold--;
                res++;
            }
            else if(v[i] >= k){
                gold += v[i];
            }
        }

        cout << res << "\n";
    }
      
    return 0;
}