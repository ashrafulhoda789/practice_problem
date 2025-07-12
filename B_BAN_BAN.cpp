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

        int res = n/2 + n%2;
        cout << res << "\n";

        long long l=1,r=3*n;
        while(l < r){
            cout << l << " " << r << "\n";
            l += 3;
            r -= 3;
        }
        
    }
      
    return 0;
}