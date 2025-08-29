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

        int tmp = n,sum = 0;
        while(tmp > 0){
            int r = tmp%10;
            sum += r;
            tmp /= 10;
        }

        cout << sum << "\n";
        
    }
      
    return 0;
}