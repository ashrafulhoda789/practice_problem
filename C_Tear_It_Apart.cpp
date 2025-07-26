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

        int l,m;
        int a = s.size();
        for (int i = 0; i < 26; i++) {
            l = 0;
            m = 0;
            for (int j = 0; j <= s.size(); j++) {
                if (j == s.size() || s[j] == i + 97) {
                    m = max(m, j - l);
                    l = j + 1;
                }
            }
            a = min(a, m);
        }
        if (a == 0) {
            cout << "0 \n";
        } else {
            cout << __lg(a) + 1 << endl;
        }
        
    }
      
    return 0;
}

