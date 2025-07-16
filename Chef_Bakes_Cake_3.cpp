#include<bits/stdc++.h>
using namespace std;

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

        int mx = *max_element(v.begin(),v.end());

        int max_profit = INT_MIN;
        for(int i=0; i <= mx; i++) {
            int sum = 0;

            for(int j=0; j<n; j++){
                int sell = min(v[j],i);
                sum += sell;
            }
            int profit = (sum*50) - (n*i)*30;
            max_profit = max(max_profit,profit);
        }

        cout << max_profit << "\n";
        
    }
      
    return 0;
}