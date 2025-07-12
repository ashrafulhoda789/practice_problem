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

        string s;
        cin >> s;

        map<char,int> mp;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '?')continue;
            else mp[s[i]]++;
        }

        int ans = 0;
        for(int i=0; i<mp.size(); i++){
            ans += min(mp[i],n);
        }
        cout <<  ans << "\n";
    }
      
    return 0;
}