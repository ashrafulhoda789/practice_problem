#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<string> v(n);
        for(int i=0; i<n; i++){
            string s;
            cin >> s;
            v.push_back(s);
        }

        // for(auto i : v){
        //     cout << i << "\n";
        // }

        set<string> st;
        for(auto i : v){
            st.insert(i);
        }

        string tmp = "";
        for(int i=0; i<k; i++){
            tmp.push_back('0');
        }

        bool ok = true;
        for(int i=k-1; i>=0; i--){
            tmp[i] = '1';
            if(st.find(tmp) == st.end()){
                ok = false;
                break;
            }
            tmp[i] = '0';
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
        
    }
      
    return 0;
}