#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,t;
    cin >> a >> b >> t;

    if(t < a){
        cout << "0\n";
        return 0;
    }

    int r = t/a;

    int bis = b*r;
    cout << bis << endl;

    return 0;
}