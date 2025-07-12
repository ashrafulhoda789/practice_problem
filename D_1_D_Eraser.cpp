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

        string s;
        cin >> s;

        int l=0;
        int cnt = 0;

        while(l < n){
            if(s[l] == 'B'){
                cnt++;
                l += k-1;
            }
            l++;
        }
        cout << cnt << "\n";
    }
      
    return 0;
}