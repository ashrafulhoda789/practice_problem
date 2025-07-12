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

        string s = "aeiou";

        vector<int> v(5,n/5);
        for(int i=0; i<n%5; i++){
            v[i]++;
        }

        for(int i=0; i<5; i++){
            for(int j=0; j<v[i]; j++){
                cout << s[i];
            }
        }
        cout << "\n";
        
    }
      
    return 0;
}