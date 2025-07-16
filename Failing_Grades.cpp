#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int sum = 0;
        bool ok = true;
        for(int i=0; i<n; i++){
            sum += v[i];
            if(sum/(i+1) < 40){
                ok = false;
                break;
            }
        }

        if(ok) cout << "Yes\n";
        else cout << "No\n";
        
    }
      
    return 0;
}