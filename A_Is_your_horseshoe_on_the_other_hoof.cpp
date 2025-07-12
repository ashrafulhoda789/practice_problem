#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    vector<ll> v(4);

    for(int i=0; i<4; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    
    ll cnt = 0;
    for(int i=0; i<3; i++){
        if(v[i] == v[i+1]){
            cnt++;
        }
    }

    cout << cnt << "\n";
      
    return 0;
}