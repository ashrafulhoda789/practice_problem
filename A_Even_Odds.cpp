#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long n,k;
    cin >> n >> k;
    
    long long ans=0;
    long long r = (n+1)/2;

    if(k <= r){
        ans = k*2 - 1;
    }else{
        ans = (k-r)*2;
    }
    
    cout << ans << "\n";
      
    return 0;
}