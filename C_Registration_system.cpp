#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    map<string,int> mp;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;

        if(mp.find(s) != mp.end()){
            cout << s << mp[s] << "\n";
            mp[s]++;
            
        }else{
            mp[s] = 1;
            cout << "OK\n";
        }
    }

    return 0;
}