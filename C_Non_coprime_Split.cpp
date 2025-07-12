#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return i;
        }
    }
    return n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int l,r;
        cin >> l >> r;

        if(r <= 3){
            cout << "-1\n";
            continue;
        }

        if(l<r){
            if(r%2 == 0){
                cout << 2 << " " << r-2 << "\n";
            }
            else{
                r--;
                cout << 2 << " " << r-2 << "\n";
            }
        }
        else if(l == r){
            if(l%2 == 0){
                cout << 2 << " " << l-2 << "\n";
            }
            else if(isPrime(l) == l){
                cout << "-1\n";
            }
            else if(isPrime(l) != l){
                int x = isPrime(l);
                cout << x << " " << l-x << "\n";
            }
        }
        
    }
      
    return 0;
}