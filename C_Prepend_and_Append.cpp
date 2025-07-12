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

        int cnt = 0;
        int i=0,j=n-1;
        while(i < j){
            if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')) cnt++;
            else break;
            i++;
            j--;

        }

        cout << n - (2*cnt) << "\n";
    }
      
    return 0;
}