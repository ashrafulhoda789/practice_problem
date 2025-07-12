#include<bits/stdc++.h>
using namespace std;

int LCM(int a, int b){
    return (a/__gcd(a,b))*b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int l,r,x=-1,y=-1;
        cin >> l >> r;

        if(2*l <= r){
            x = l;
            y = 2*l;
        }

        cout << x << " " << y << "\n";
        
    }
      
    return 0;
}