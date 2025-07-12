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

        string s,t="";
        cin >> s;

        int not_pair = 0,match_pair = 0,l=0,r=n-1;
        while(l < r){
            if(s[l] == s[r]) match_pair += 2;
            else not_pair++;
            l++;
            r--;
        }

        for(int i=0; i<=n; i++){
            int total = i;
            total -= not_pair;

            if(total < 0){
                t.push_back('0');
                continue;
            }

            total = max((total%2),total-match_pair);
            total = max(0,total-(n%2));

            if(total == 0){
                t.push_back('1');
            }else{
                t.push_back('0');
            }
        }

        cout << t << "\n";
        
    }
      
    return 0;
}