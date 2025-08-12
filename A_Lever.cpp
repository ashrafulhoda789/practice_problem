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

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        int cnt = 0;
        while(true){
            
            int l = -1;
            for(int i=0; i<n; i++){
                if(a[i] > b[i]){
                    l = i;
                    break;
                }
            }

            if(l == -1){
                break;
            }

            a[l]--;
            int r = -1;
            for(int i=0; i<n; i++){
                if(b[i] > a[i]){
                    r = i;
                    break;
                }
            }

            if(r != -1) a[r]++;

            cnt++;
        }

        cout << cnt+1 << "\n";
        
    }
      
    return 0;
}