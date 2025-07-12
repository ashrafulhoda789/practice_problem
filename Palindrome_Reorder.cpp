#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    string s;
    cin >> s;

    int n = s.size();

    string t(n,' ');

    map<char,int> mp; 
    for(auto ch : s){
        mp[ch]++;
    }

    int odd=0;
    for(auto it : mp){
        //cout << it.first << " " << it.second << "\n";
        int freq = it.second;
        if(freq%2 != 0) odd++;
    }

    if(odd > 1){
        cout << "NO SOLUTION\n";
        return 0;
    }

    
    int l=0,r=n-1;
    for(int i=0; i<n; i++){
        if(mp[s[i]]%2 != 0){
            t[n/2] = s[i];
            mp[s[i]]--;
        }

        while(mp[s[i]] > 0){
            t[l++] = t[r--] = s[i];
            mp[s[i]]-=2;
        }

    }

    cout << t << "\n";
      
    return 0;
}