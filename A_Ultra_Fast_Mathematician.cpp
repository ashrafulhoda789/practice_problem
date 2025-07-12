#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    string s,t;
    cin >> s >> t;

    int i=0;

    while(i < s.size()){
        if(s[i] == t[i]){
            cout << "0";
        }
        else{
            cout << "1";
        }
        i++;
    }
    cout << "\n";

      
    return 0;
}