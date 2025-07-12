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

        if(n <= 2 && (s[0] == '0' || s[1] == '0')) cout << "No\n";
        else{
            int i=0,zero_cnt = 0,one_cnt = 0;
            while(i < n){
                if(s[i] == '0'){
                    zero_cnt++;
                    while(s[i] == '0' && i < n){
                        i++;
                    }
                    
                }else{
                    one_cnt++;
                    i++;
                }
            }
            //cout << zero_cnt << " " << one_cnt << "\n";

            if(zero_cnt >= one_cnt) cout << "No\n";
            else cout << "Yes\n";
        }
        
    }
      
    return 0;
}