#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,p;
    cin >> n >> p;

    set<int> s;

    for(int i=0; i<p; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    
    int ln = s.size();
    //cout << ln << "\n";

    if(ln == n){
        cout << "I become the guy.\n";
    }else{
        cout << "Oh, my keyboard!\n";
    }
      
    return 0;
}