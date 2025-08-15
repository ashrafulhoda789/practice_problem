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

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << (i+j)%n << " ";
            }
            cout << "\n";
        }

    }
      
    return 0;
}
