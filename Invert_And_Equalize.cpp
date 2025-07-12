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

        string s;
        cin >> s;

        int i=0,cnt1=0,cnt2=0;

        while(i < n){

            if(s[i] == '0'){
                cnt1++;
                while(s[i] == '0') i++;
            }
            else if(s[i] == '1'){
                cnt2++;
                while(s[i] == '1') i++;
            }
        }

        int res = min(cnt1,cnt2);
        cout << res << "\n";
    }
      
    return 0;
}