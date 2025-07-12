#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,q;
    cin >> n;

    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }

    cin >> q;
    while(q--){
        int k;
        cin >> k;

        int l = lower_bound(v.begin(), v.end(),k) - v.begin();
        

        if(l-1 >= 1){
            cout << v[l-1] << " ";
        }
        else{
            cout << "X ";
        }

        int r = upper_bound(v.begin(),v.end(),k) - v.begin();

        if(r <= n){
            
            cout << v[r] << "\n";
        }
        else{
            cout << "X\n";
        }
    }
      
    return 0;
}