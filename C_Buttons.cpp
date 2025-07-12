#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int mx_coin = 0;

    if(a < b)
        swap(a,b);
    
    mx_coin += a;
    a--;

    mx_coin += max(a,b);

    cout << mx_coin << endl;
    return 0;
}