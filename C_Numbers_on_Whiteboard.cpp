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

        vector<int> v;
        int x = n;
        int y = n-1;
        int len = n-1;
        int ans = 0;

        while(len--){
            v.push_back(x);
            v.push_back(y);

            if((x+y)%2==0) ans = (x+y)/2;
            else ans = (x+y)/2 + 1;

            x = ans;
            y = y-1;
        }

        cout << ans << "\n";
        for(int i=0; i<v.size(); i++){
            if((i+1)%2 == 0) cout << v[i] << "\n";
            else cout << v[i] << " ";
        }
    }
      
    return 0;
}