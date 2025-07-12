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

        // cout << __lg(n) << "\n";
        int bitPos = __lg(n);
        int A = 1 << bitPos;
        int B = A^n;

        cout << B << " " << A << "\n";
        
    }
      
    return 0;
}