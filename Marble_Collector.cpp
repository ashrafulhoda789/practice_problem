#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        set<int> s;
        for(int i=0; i<n; i++){
            s.insert(v[i]);
        }

        int marbel = m - s.size();
        cout << marbel << "\n";
    }
      
    return 0;
}