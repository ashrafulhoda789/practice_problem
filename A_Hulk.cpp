#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    if(n == 1){
        cout << "I hate it\n";
    }
    else if(n > 1){
        cout << "I hate that";
    }

    for(int i=2; i<n; i++){
        if(i%2 != 0 && i!=n){
            cout << " I hate that";
        }
        else if(i%2 == 0 && i!=n){
            cout << " I love that";
        }
    }

    if(n%2==0 && n>1){
        cout << " I love it";
    }
    else if(n > 1){
        cout << " I hate it\n";
    }
      
    return 0;
}