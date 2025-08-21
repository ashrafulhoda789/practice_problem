#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

int count(string a, string b){
    int n = a.size();
    int cnt = 0;
    for(int i=0; i<n; i++){
        cnt += abs((a[i]-'a') - (b[i]-'a'));
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        vector<string> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int mn = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j = 0; j<n; j++){

                if(i == j)continue;;

                int move = count(v[i],v[j]);
                mn = min(mn,move);
            }
        }
        
        cout << mn << "\n";
    }
      
    return 0;
}