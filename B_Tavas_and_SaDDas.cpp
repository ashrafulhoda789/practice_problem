#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    string s;
    cin >> s;

    int len = s.size();
    int MSB = (1 << len);
    MSB--;

    //cout << MSB << "\n";

    reverse(s.begin(),s.end());

    int ans = 0;
    for(int i=0; i<len; i++){
        if(s[i] == '7'){
            ans += (1 << i);
            //cout << ans << "\n";
        }
    }

    cout << MSB + ans << "\n";
      
    return 0;
}