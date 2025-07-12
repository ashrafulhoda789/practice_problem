#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int a,b,c;
    cin >> a >> b >> c;

    int e1 = a+b+c;
    int e2 = a+b*c;
    int e3 = a*b+c;
    int e4 = a*b*c;
    int e5 = a*(b+c);
    int e6 = (a+b)*c;

    int res1 = max(e1,e2);
    int res2 = max(res1,e3);
    int res3 = max(res2,e4);
    int res4 = max(res3,e5);
    int res5 = max(res4,e6);

    cout << res5 << "\n";
      
    return 0;
}