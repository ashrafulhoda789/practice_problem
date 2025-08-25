#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int cnt1 = 0, cnt2 = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'A'){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }

        if(cnt1 > cnt2){
            cout << "A\n"; 
        }
        else cout << "B\n";
        
    }
      
    return 0;
}