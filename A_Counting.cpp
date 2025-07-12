#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    if(a > b){
        cout << "0\n";
        return 0;
    }
        
    int res = (b - a) + 1;

    cout << res << endl;
    
    return 0;
}