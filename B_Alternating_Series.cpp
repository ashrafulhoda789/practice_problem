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

        vector<int> a(n);
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                a[i] = -1;
            }
            else{
                a[i] = 3;
            }
        }

        if(n%2 == 0){
            a[n-1] = 2;
        }

        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        
    }
      
    return 0;
}