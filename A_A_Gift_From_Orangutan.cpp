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

        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int min = a[0];
        int max = a[0];
        
        for(int i=0; i<n; i++){
            if(a[i] > max) max = a[i];
            if(a[i] < min) min = a[i];
        }

        b[0] = a[0];
        c[0] = a[0];
        
        for(int i=1; i<n; i++){
            b[i] = min;
            c[i] = max;
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            ans += (c[i] - b[i]);
        }

        cout << ans << "\n";
    }
      
    return 0;
}