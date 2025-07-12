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

        map<int,int> mp;
        vector<int> v(n+1),res;
        for(int i=1; i<=n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        for(auto i : mp){
            if(i.second >= k){
                res.push_back(i.first);
            }
        }

        if(res.size() <= 0){
            cout << "-1\n";
            continue;
        }

        int mx = -1,l,r;
        int st = res[0];
        for(int i=1; i<res.size(); i++){
            if(res[i]-1 != res[i-1]){
                if(res[i-1]-st > mx){
                    mx = res[i-1]-st;
                    l = st;
                    r = res[i-1];
                }
                st = res[i];
            }
        }

        if(res[res.size()-1]-st > mx){
            l = st;
            r = res[res.size()-1];
        }

        cout << l << " " << r << "\n";
    }
      
    return 0;
}