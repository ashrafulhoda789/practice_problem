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
        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        int one = 0;
        bool ok = true;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                one++;
                if(one >= k){
                    ok = false;
                    break;
                }
            }
            else{
                one = 0;
            }
        }

        if(!ok){
            cout << "NO\n";
            continue;
        }

        vector<int> p(n);
        int tmp = n;
        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                p[i] = tmp--;
            }
        }

        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                p[i] = tmp--;
            }
        }

        cout << "YES\n";
        for(int i=0; i<n; i++){
            cout << p[i] << " ";
        }
        cout << "\n";
        
    }
      
    return 0;
}