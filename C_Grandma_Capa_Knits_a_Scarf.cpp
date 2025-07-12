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

        int ans = INT_MAX;

        for (char ch = 'a'; ch <='z'; ch++)
        {
            int i=0,j=n-1,temp=0;
            while(i <= j){
                if(s[i] != s[j]){
                    if(s[i] == ch){
                        temp++;
                        i++;
                    }else if(s[j] == ch){
                        temp++;
                        j--;
                    }else{
                        break;
                    }
                }else{
                    i++;
                    j--;
                }
            }

            if( i > j){
                ans = min(ans,temp);
            }
        }

        if(ans == INT_MAX){
            cout << "-1\n";
        }else{
            cout << ans << "\n";
        }
        

    }
      
    return 0;
}