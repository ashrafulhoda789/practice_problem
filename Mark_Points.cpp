#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

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

        int i = 0;
        bool ok = true;
        while(i < n){
            if(s[i] == '1'){
                int j = i;
                while(j < n && s[j] == '1') j++;
                int len = j - i;

                if(len == 1 || len == 2){
                    ok = false;
                    break;
                }
                i = j;
            }
            else i++;
        }

        if(ok) cout << "Yes\n";
        else cout << "No\n";
        
    }
      
    return 0;
}