#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    string s;
    cin >> s;

    vector<char> v;
    for(auto ch : s){
        if(ch != '+'){
            v.push_back(ch);
        }
    }

    sort(v.begin(),v.end());

    for(int i=0; i< v.size(); i++){
        cout << v[i];
        if(i == v.size()-1){
            break;
        }
        cout << "+";
    }
    cout << "\n";
      
    return 0;
}