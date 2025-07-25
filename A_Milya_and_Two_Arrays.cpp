#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        set<int> s1;
        set<int> s2;
        for(int i=0; i<n; i++){
            cin >> a[i];
            s1.insert(a[i]);
        }

        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
            s2.insert(b[i]);
        }

        if(s1.size() + s2.size() > 3){
            cout << "YES\n";
        }
        else cout << "NO\n";
        
    }
      
    return 0;
}