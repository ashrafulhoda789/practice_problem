#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int x,y;
        cin >> x >> y;

        if(x + 1 == y){
            cout << "Yes\n";
        }
        else if(y > x){
            cout << "No\n";
        }
        else{
            y--;
            if((x - y)%9 == 0){
                cout << "Yes\n";
            }
            else cout << "No\n";
        }
        
    }
      
    return 0;
}