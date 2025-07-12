#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int x,y;
        cin >> x >> y;

        int r1 = x%3;
        int r2 = y%3;

        if(r1 != 0 && r2 != 0){
            cout << r1 << "\n";
        }else{
            cout << "0" << "\n";
        }
    }
      
    return 0;
}