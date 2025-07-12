#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    
    if(n%2 == 0){
        int primes = n/2;

        cout << primes << "\n";
        for(int i=1; i<=primes; i++){
            cout << 2 << " ";
        }
        cout << "\n";
    }
    else{
        n -= 3;
        int primes = n/2;

        cout << primes + 1 << "\n";
        for(int i=1; i<= primes; i++){
            cout << 2 << " ";
        }
        cout << 3 << "\n";
    }
      
    return 0;
}