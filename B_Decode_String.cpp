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

        string t,s="";
        cin >> t;

        int i=0;
        while(i < t.size()){
            if(t[i+2] == '0' && t[i+3] != '0' && i < n){
                s += 96+stoi(t.substr(i,2));
                i += 3;
            }else{
                s += 96+(t[i]-'0');
                i++;
            }
            
        }

        cout << s << "\n";

    }
      
    return 0;
}