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

        vector<int> a(n),b(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        int maxL = *max_element(b.begin(),b.end());
        int sum = 0,mx = INT_MIN;
        for(int i=1; i<=maxL; i++){
            sum = 0;
            for(int j=0; j<n; j++){
                if(b[j] <= i && a[j] > 0){
                    sum += a[j];
                }
            }
            mx = max(mx,sum - i);
        }

        if(mx < 0){
            cout << 0 << "\n";
        }
        else cout << mx << "\n";
        
    }
      
    return 0;
}