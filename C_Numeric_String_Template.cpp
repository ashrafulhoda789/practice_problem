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

        vector<int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        int m;
        cin >> m;

        while(m--){
            string s;
            cin >> s;

            if(s.size() != n){
                cout << "NO\n";
            }else{
                bool flag = true;
                map<char,vector<int>> m;
                for(int i=0; i<s.size(); i++){
                    m[s[i]].push_back(i);
                }

                for(auto it : m){
                    vector<int> a = it.second;
                    int val = v[a[0]];
                    if(a.size() != mp[val]){
                        flag = false;
                        break;
                    }

                    for(int j=1; j<a.size(); j++){
                        if(val != v[a[j]]){
                            flag = false;
                            break;
                        }
                    }
                }

                if(flag) cout << "YES\n";
                else cout << "NO\n";
                
            }
        }
    }
      
    return 0;
}