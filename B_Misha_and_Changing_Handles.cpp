#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    map<string,string> mp,has;
    for(int i=0; i<n; i++){
        string a,b;
        cin >> a >> b;

        if(has.find(a) != has.end()){  // mp->  vasya = petrov      has-> petrov = vasya 
            string s = has[a];         // a = petrov , b = vasyapetrov123   // s = vasya
            mp[s] = b;
            has.erase(a);
            has[b] = s;
        }
        else{
            mp[a] = b;
            has[b] = a;
        }
        
    }

    cout << mp.size() << "\n";
    for(auto it : mp){
        cout << it.first << " " << it.second << "\n";
    }
      
    return 0;
}