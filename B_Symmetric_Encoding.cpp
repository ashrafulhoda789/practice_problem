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

        string s,a="";
        cin >> s;

        set<char> st;

        for(int i=0; i<n; i++){
            st.insert(s[i]);
        }
        for(auto ch : st){
            a.push_back(ch);
        }

        map<char,char> mp;
        for(int i=0; i<a.size(); i++){
            mp[a[i]] = a[a.size()-1-i];
        }

        for(int i=0; i<n; i++){
            s[i] = mp[s[i]];
        }
        cout << s <<"\n";
        
    }
      
    return 0;
}