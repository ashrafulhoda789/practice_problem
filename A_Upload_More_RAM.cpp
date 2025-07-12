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

        int res = n + (n-1)*(k-1);

        cout << res << "\n";
    }
      
    return 0;
}