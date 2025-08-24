#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        
        sort(v.begin(),v.end());

        ll sum = 0;
        if(n%2 == 1){
            sum += v[0];
            for(int i=2; i<n; i+=2){
                sum += v[i];
            }
        }
        else{
            for(int i=1; i<n; i+=2){
                sum += v[i];
            }
        }

        cout << sum << "\n";
    }
      
    return 0;
}