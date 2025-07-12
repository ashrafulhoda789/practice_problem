#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<ll,ll> p1, pair<ll,ll> p2){
    return p2.second > p1.second;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    vector<pair<ll,ll>> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(),v.end(),cmp);
    // for(auto i : v){
    //     cout << i.first << " " << i.second << "\n";
    // }

    ll cnt = 1;
    auto prev = v[0];
    for(int i=1; i<n; i++){
       auto val = v[i];
       if(val.first >= prev.second){
          cnt++;
          prev = v[i];
       }
    }

    cout << cnt << "\n";
      
    return 0;
}