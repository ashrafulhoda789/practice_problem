#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int year;
    cin >> year;

    int tmp = year + 25;

    if(tmp >= 2050){
        cout << "Yes\n";
    }
    else cout << "No\n";
      
    return 0;
}