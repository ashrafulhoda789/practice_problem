#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    string s[n+1];
    map<string,int> mp;

    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    for(int i=n-1; i>=0; i--){
        if(!mp[s[i]]){
            cout << s[i] << "\n";
            mp[s[i]] = 1;
        }
    }
      
    return 0;
}