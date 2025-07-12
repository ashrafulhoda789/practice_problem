#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        if(n > m){
            cout << "No\n";
            continue;
        }

        int sum = 0;
        vector<int> ans(n+1);
        if(n%2 == 0 && m%2 == 0){
            cout << "Yes\n";
            for(int i=1; i<=n-2; i++){
                ans[i] = 1;
                sum++;
            }
            ans[n-1] = (m-sum)/2;
            ans[n] = ans[n-1];
        }
        else if((n%2 == 1 && m%2 == 0) || (n%2 == 1 && m%2 == 1)){
            cout << "Yes\n";
            for(int i=1; i<=n-1; i++){
                ans[i] = 1;
                sum++;
            }
            ans[n] = m-sum;
        }
        else if(n%2 == 0 && m%2 == 1){
            cout << "No\n";
            continue;
        }

        for(int i=1; i<=n; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        
    }
      
    return 0;
}