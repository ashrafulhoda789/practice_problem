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

        int ln = 2*n;

        for(int i=0; i<ln; i++){
            for(int j=0; j<ln; j++){
                if((i/2 + j/2)%2 == 0){
                    cout << "#";
                }
                else cout << ".";
            }
            cout << "\n";
        }
        
    }
      
    return 0;
}