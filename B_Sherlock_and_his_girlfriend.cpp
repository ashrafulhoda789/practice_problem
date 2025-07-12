#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1)
        return false;
    
    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    if(n == 1){
        cout << 1 << "\n";
        cout << 1 << "\n";
    }
    else if(n == 2){
        cout << 1 << "\n";
        cout << 1 << " " << 1 << "\n";
    }
    else{
        cout << 2 << "\n";
        for(int i=2; i<= n+1; i++){
            if(isPrime(i)){
                cout << 1;
            }
            else{
                cout << 2;
            }

            if(i < n+1) cout << " ";
        }
        cout << "\n";
    }
    
      
    return 0;
}