#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    string s;
    getline(cin,s);

    set<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            st.insert(s[i]);
        }
    }

    cout << st.size() << "\n";
      
    return 0;
}