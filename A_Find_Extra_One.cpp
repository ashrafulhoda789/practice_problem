#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    int pos = 0, neg = 0;
    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;

        if(x > 0) pos++;
        else if(x < 0) neg++;
    }

    //cout << pos << " " << neg << "\n";

    if((pos >= 2 && neg <= 1) || (pos <= 1 && neg >= 2) || (pos <= 1 && neg <= 1)){
        cout << "Yes\n";
    }
    else cout << "No\n";
      
    return 0;
}