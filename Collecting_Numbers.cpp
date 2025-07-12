#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int> pos(n+1);
    for(int i=0; i<n; i++){
        pos[v[i]] = i;
    }

    int ans = 1;
    for(int i=1; i<n; i++){
        if(pos[i+1] < pos[i]) ans++;
    }

    cout << ans << "\n";
      
    return 0;
}