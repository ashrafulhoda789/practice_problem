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

        string s = "";
        for(int i=1; i<=x/2; i++){
            s += '1';
        }

        for(int i=1; i<=y; i++){
            s += '2';
        }

        for(int i=1; i<=x/2; i++){
            s += '1';
        }

        cout << s << "\n";
        
    }
      
    return 0;
}