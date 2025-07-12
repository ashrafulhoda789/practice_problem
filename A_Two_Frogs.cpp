#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,a,b;
        cin >> n >> a >> b;

        if(abs(a - b)%2 == 1){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
      
    return 0;
}