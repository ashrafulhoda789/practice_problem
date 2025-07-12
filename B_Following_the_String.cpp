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

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        string s = "";
        int i=0;

        vector<int> cnt(26,0);

        for(int i=0; i<n; i++){
            for(int j=0; j<26; j++){
                if(cnt[j] == v[i]){
                    cnt[j]++;
                    s += char(97+j);
                    break;
                }
            }
        }

        cout << s << "\n";
        
        
    }
      
    return 0;
}