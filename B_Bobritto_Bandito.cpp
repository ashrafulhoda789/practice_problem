#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,m,l,r;
        cin >> n >> m >> l >> r;

        int diff = n-m;
        l = abs(l);
        if(l >= diff){
            l -= diff;
            diff = 0;
        }
        else{
            diff -= l;
            l = 0;
        }

        cout << -l << " " << r-diff << "\n";
        
    }
      
    return 0;
}