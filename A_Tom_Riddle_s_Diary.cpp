#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;   

    vector<string> v;
    vector<bool> flag(n,false);
    for(int i=0; i<n; i++){ 
        string s;
        cin >> s;
        v.push_back(s);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i] == v[j]){
                flag[j] = true;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(flag[i]){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
      
    return 0;
}