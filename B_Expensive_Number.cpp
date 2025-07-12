#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.size();
        int cnt=0;
        bool flag = false;

        for(int i=n-1; i>=0; i--){
            if(s[i] != '0') flag = true;
            else if(flag) cnt++;
        }

        int res = n - (cnt + 1);
        cout << res << "\n";
    }
      
    return 0;
}