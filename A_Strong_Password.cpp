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

        vector<char> v;

        for(int i=0; i<s.size(); i++){
            v.push_back(s[i]);
        }

        int cnt = 2;
        for(int i=1; i<v.size(); i++){
            if(v[i] == v[i-1]){
                cnt += 1; 
            }else{
                cnt += 2;
            }
        }
    }
      
    return 0;
}