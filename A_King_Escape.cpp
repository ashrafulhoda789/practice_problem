#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    int ax,ay,bx,by,cx,cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    if(((bx < ax && cx < ax) || (bx > ax && cx > ax)) && ((by < ay && cy < ay) || (by > ay && cy > ay))){
        cout << "YES\n";
    }
    else cout << "NO\n";
      
    return 0;
}