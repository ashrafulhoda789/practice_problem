#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll kth_bit_on_off(ll n,int k){
    return ((n >> k) & 1LL);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll n,m;
        cin >> n >> m;

        ll l = max(0LL, n-m);
        ll r = n+m;

        ll MSB = max(__lg(l),__lg(r));
        //cout << MSB << "\n";  

        ll ans = 0,val=1;
        for(int k=0; k<=MSB; k++){
            if(r-l >= val){
                ans += val;
            }
            else if(kth_bit_on_off(l,k)) ans += val;
            else if(kth_bit_on_off(r,k)) ans += val;

            val *= 2;
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}