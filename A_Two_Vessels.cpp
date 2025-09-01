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
        int a,b,c;
        cin >> a >> b >> c;
        
        if(a == b){
            cout << 0 << "\n";
            continue;
        }

        int g,s;
        if(a > b){  
            g = a;
            s = b;
        }
        else{
            g = b;
            s = a;
        }

        int cnt = 0;
        while(true){
            g -= c;
            s += c;
            cnt++;

            if(s >= g){
                break;
            }
        }

        cout << cnt << "\n";
        
    }
      
    return 0;
}