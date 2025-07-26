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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[a[i]] = b[i];
        }

        sort(a.begin(),a.end());

        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";

        for(int i=0; i<n; i++){
            cout << mp[a[i]] << " ";
        }
        cout << "\n";
        
    }
      
    return 0;
}