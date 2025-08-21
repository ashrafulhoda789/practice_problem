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

        string a;
        cin >> a;

        int m;
        cin >> m;

        string b;
        cin >> b;

        string c;
        cin >> c;

        for(int i=0; i<m; i++){
            if(c[i] == 'V'){
                a.insert(0,1,b[i]);
            }
            if(c[i] == 'D'){
                a.push_back(b[i]);
            }
        }

        cout << a << "\n";
        
    }
      
    return 0;
}