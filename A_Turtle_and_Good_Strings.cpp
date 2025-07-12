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

        if(n < 2){
            cout << "NO\n";
        }else{
            string s;
            cin >> s;

            char f = s[0];
            char l = s[n-1];

            if(f == l){
                cout << "NO\n";
            }else{
                cout << "YES\n";
            }
        }
    }
      
    return 0;
}