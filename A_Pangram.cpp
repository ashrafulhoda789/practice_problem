#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i=0; i<n; i++){
        s[i] = tolower(s[i]);
    }

    //cout << s << "\n";

    map<char,int> mp;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }

    int len = mp.size();

    if(len >= 26){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
      
    return 0;
}