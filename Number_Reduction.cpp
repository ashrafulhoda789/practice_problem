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
        int x;
        cin >> x;

        int n = x;
        while(true){
            if(n > 3){
                n -= 3;
            }
            else if(n %2 == 0){
                n /= 2;
            }
            else break;
        }

        cout << n << "\n";
        
    }
      
    return 0;
}