#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll ans = 0;
        map<string,ll> mp;
        for(ll i=0; i<n; i++){
            string s;
            cin >> s;

            string temp = s;
            for(char ch='a'; ch<='z'; ch++){
                if(ch != s[0]){
                    temp[0] = ch;
                    ans += mp[temp];
                }
                
            }

            temp = s;
            for(char ch='a'; ch<='z'; ch++){
                if(ch != s[1]){
                    temp[1] = ch;
                    ans += mp[temp];
                }
                
            }
            mp[s]++;

        }
    
        cout << ans << "\n";
    }
    
      
    return 0;
}