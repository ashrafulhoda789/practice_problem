#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll x,y,k;
        cin >> x >> y >> k;

        while(x > 1){
            int rem = y - (x%y);
            if(rem < k){
                k -= rem;
                x += rem;
            }
            else if(rem >= k){
                x += k;
                k=0;
            }
            
            while(x%y == 0) x /= y;
            if(k <= 0) break;
        }

        if(k > 0){
            k = k%(y-1);
            x += k;
            while (x%y == 0)
            {
                x /= y;
            }
        }

        cout << x << "\n";
        
    }
      
    return 0;
}