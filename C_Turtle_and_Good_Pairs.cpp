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
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        while(n > 0){
            for(auto it : mp){
                char a = it.first;
                int b = it.second;
                if(b > 0){
                    cout << a;
                    n--;
                    mp[a]--;
                }
            }
        }
        cout << "\n";
        
    }
      
    return 0;
}