#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    string s;
    cin >> s;

    int i=0;
    bool ok = true;
    for(int i=0; i<s.size(); i++) {
        if(i < s.size() && s[i] == 'W' && s[i+1]=='U' && s[i+2] == 'B'){
            i+=2;
            if(!ok){
                cout << " ";
                ok = true;
            }
            continue;
        }
        else{
            ok = false;
            cout << s[i];
        }
    }
    cout << "\n";

      
    return 0;
}