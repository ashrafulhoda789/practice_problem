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

    set<int> s;
    int r=0,l=0,ans = 0;
    while(r<n){
        while(s.count(v[r])){
            s.erase(v[l]);
            l++;
        }
        s.insert(v[r]);
        ans = max(ans,r-l+1);
        r++;
    }

    cout << ans << "\n";
      
    return 0;
}