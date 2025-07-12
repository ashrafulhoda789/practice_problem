#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    map<int,int> mp;
    mp[0] += 1;
    ll sum = 0,ans = 0;

    for(int i=0; i<n; i++){
        sum = ((sum + v[i])%n + n)%n; //For handling the negative value 
        ans +=  mp[sum];
        mp[sum] += 1;
    }

    // for(auto i : mp){
    //     cout << i.first << " " << i.second <<  "\n";
    // }

    cout << ans << "\n";
      
    return 0;
}