#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t = 1;
    int n,q;
    while(cin >> n >> q){

        if(!n && !q){
           break;
        }

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        cout << "CASE# " << t++ << ":\n";
        while(q--){
            int k;
            cin >> k;

            auto res = lower_bound(v.begin(),v.end(),k);

            if(res != v.end() && *res == k){
                cout << k << " found at " << res - v.begin()+1 << "\n";
            }
            else{
                cout << k << " not found\n";
            }
            
        }
        
    }
      
    return 0;
}