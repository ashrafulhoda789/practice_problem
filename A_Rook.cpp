#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        char f = s[0];
        char l = s[1];

        for(char i='1'; i<= '8'; i++){
            // cout << i << " ";
            if(i == l) continue;

            cout << f << i << "\n";
        }

        for(char i='a'; i<= 'h'; i++){
            // cout << i << " ";
            if(i == f) continue;

            cout << i << l << "\n";
        }
        
    }
      
    return 0;
}