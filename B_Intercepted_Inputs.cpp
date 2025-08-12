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

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        int l=0,r=n-1,p = 0,q = 0, x = n-2;
        
        while(l < r){
            ll val = v[l]*v[r];

            if(val == x){
                p = v[l];
                q = v[r];
                break;
            }
            else if(val > x){
                r--;
            }
            else l++;
        }

        cout << p << " " << q << "\n";
        
    }
      
    return 0;
}