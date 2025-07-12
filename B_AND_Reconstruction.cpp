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
        vector<int> b(n-1);

        for(int i=0; i<n-1; i++){
            cin >> b[i];
        }

        a[0] = b[0];
        for(int i=1; i<n-1; i++){
            a[i] = b[i-1] | b[i];
        }

        a[n-1] = b[n-2];
        bool ok = true;
        for(int i=1; i<n; i++){
            int x = a[i-1]&a[i];
            int y = b[i-1];

            if(x!=y){
                ok = false;
                break;
            }
        }

        if(ok){
            for(int i=0; i<n; i++){
            cout << a[i] << " ";
            }
            cout << "\n";
        }
        else cout << "-1\n";
        
        
    }
      
    return 0;
}