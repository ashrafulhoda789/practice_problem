#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,cnt1 = 0,cnt2 = 0;
        cin >> n;
        string s;
        cin >> s;

        for(int i=0; i<n; i++){
            if(s[i] == 'B')
                break;
            cnt1++;
        }

        for(int i=n-1; i>=0; --i){
            if(s[i] == 'B')
                break;
            cnt2++;
        }

        int len = n - (cnt1+cnt2);

        cout << len << "\n";
    }
      
    return 0;
}