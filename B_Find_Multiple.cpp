#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    if(a > b){
        cout << "-1\n";
        return 0;
    }

    bool flag = false;
    int val;
    for(int i=a; i<=b; i++){
        if(i%c == 0){
            flag = true;
            val = i;
            break;
        }
    }

    if(flag)
        cout << val << endl;
    else
        cout << "-1\n";
        
    return 0;
}