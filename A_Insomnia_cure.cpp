#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;

    if(k==1 || l==1 || m==1 || n==1){
        cout << d << "\n";
        return 0;
    }

    int cnt = d;
    for(int i=1; i<=d; i++){
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0){
            cnt--;
        }
    }
    cout << cnt << "\n";
      
    return 0;
}