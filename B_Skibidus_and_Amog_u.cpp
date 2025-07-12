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

        if(s.size() >= 2 && s[s.size()-2] == 'u' && s[s.size()-1] == 's'){
            s.erase(s.size()-2);
            s.push_back('i');
        }

        cout << s << "\n";
    }
      
    return 0;
}