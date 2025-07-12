#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool kth_bit_on(ll n, int k){
    return ((n >> k) & 1);
}

ll turn_on_kth_bit(ll n, int k){
    return (n | (1LL << k));
}

ll turn_off_kth_bit(ll n, int k){
    return (n & (~(1LL << k)));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll b,c,d,a = 0;
        cin >> b >> c >> d;

        a = b;
        
        ll mx = max(__lg(b),__lg(c));
        ll MSB = max(mx,__lg(d));
        //cout << MSB << "\n";

        for(int k=0; k<=MSB; k++){
            if(!kth_bit_on(b,k) && kth_bit_on(d,k)){
                a = turn_on_kth_bit(a,k);
            }
            if(kth_bit_on(c,k) && kth_bit_on(d,k)){
                a = turn_off_kth_bit(a,k);
            }
        }

        if((a | b) - (a & c) == d) cout << a << "\n";
        else cout << "-1\n";
    }
      
    return 0;
}