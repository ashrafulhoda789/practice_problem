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

        long long one_cnt = 0,zero_cnt = 1;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] == 1) one_cnt++;
            else if(v[i] == 0) zero_cnt *= 2; 
        }

        cout << one_cnt*zero_cnt << "\n";
        
    }
      
    return 0;
}