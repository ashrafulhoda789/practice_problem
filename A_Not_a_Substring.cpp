#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >>  s;

        if(s == "()"){
            cout << "NO\n";
            continue;
        }

        string res;
        bool flag = false;
        for(int i=0; i<s.size(); i++){
            if(s[i] == s[i+1]){
                flag = true;
                break;
            }
        }

        if(flag){
            for(int i=0; i<s.size(); i++){
                res += "(";
                res += ")";
            }
        }
        else{
            for(int i=0; i<s.size(); i++){
                res += "(";
            }

            for(int i=0; i<s.size(); i++){
                res += ")";
            }
            
        }

        cout << "YES\n";
        cout << res << "\n";
        
    }
      
    return 0;
}