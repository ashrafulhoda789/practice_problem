#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;

        ll t1 = abs(a-1);
        ll t2 = abs(b-c);
        ll t3 = abs(c-1);

        if(t1 == t2+t3) cout << "3\n";
        else if(t1 < t2+t3) cout << "1\n";
        else cout << "2\n";
        
    }
      
    return 0;
}