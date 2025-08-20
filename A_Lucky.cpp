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
        string n;
        cin >> n;

        int sum1 = 0;
        for(int i=0; i<3; i++){
            sum1 += n[i] - '0';
        }

        int sum2 = 0;
        for(int i=3; i<n.size(); i++){
            sum2 += n[i] - '0';
        }

        if(sum1 == sum2){
            cout << "YES\n";
        }
        else cout << "NO\n";
        
    }
      
    return 0;
}