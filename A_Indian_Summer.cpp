#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    map<pair<string,string>,bool> mp;

    for(int i=0; i<n; i++){
        string f,l;
        cin >> f >> l;
        mp[{f,l}] = true;
    }

    cout << mp.size() << "\n";
    return 0;
}