#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);
int a[505][505];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i];

        a[i][i] = v[i];
    }

    for(int i = 1; i <= n; i++) {
        int val = v[i];
        int x = i, y = i;
        int need = val - 1;
 
        while(need) {
            if(y > 1 && a[x][y-1] == 0) {
                y--;
                a[x][y] = val;
            } else if(x < n && a[x+1][y] == 0) {
                x++;
                a[x][y] = val;
            } else {
                cout << -1 << "\n";
                return 0;
            }
            need--;
        }
    }
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }  
    
    
      
    return 0;
}