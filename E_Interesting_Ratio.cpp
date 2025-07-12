#include<bits/stdc++.h>
using namespace std;

int lcm(int a, int b){
    return (a/__gcd(a,b))*b;
}

int gcd(int a, int b){
    return __gcd(a,b);
}

bool isPrime(int n){
    if(n <= 1) return false;

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
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int cnt = 0;
        for(int i=1; i<=n; i++ ){
            for(int j=i+1; j<=n; j++){
                int res = lcm(i,j) / gcd(i,j);
                if(isPrime(res)){
                    cnt++;
                }
            }
        }
        
        cout << cnt << "\n";
    }
      
    return 0;
}