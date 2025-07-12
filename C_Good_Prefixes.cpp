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

        if(n==1 && v[0]==0){
            cout << "1\n";
            continue;
        }
        if(n == 1 && v[0] == 1){
            cout << "0\n";
            continue;
        }

        long long sum = 0,cnt = 0;
        int mx = 0;
        for(int i=0; i<n; i++){
            sum += v[i];
            mx = max(v[i],mx);
            if(sum-mx == mx){
                cnt++;
            }
        }

        cout << cnt << "\n";
        
    }
      
    return 0;
}