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
        int a1,b1,a2,b2;
        cin >> a1 >> b1 >> a2 >> b2;

        if(a1 == a2 && b1 == b2){
            cout << "Yes\n";
            continue;
        }

        int t1 = 5*a1 + b1;
        int t2 = 5*a2 + b2;

        if((t1 >= t2) && (t1 - t2)%6 == 0){
            cout << "Yes\n";
        }
        else cout << "No\n";
        
    }
      
    return 0;
}