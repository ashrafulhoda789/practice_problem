#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,x;
    cin >> n >> x;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    map<ll,ll> mp;
    mp[0] = 1;
    ll sum=0,cnt=0;

    for(int i=0; i<n; i++){
        sum += v[i];
        cnt += mp[sum-x];
        mp[sum]++;
    }

    cout << cnt << "\n";
      
    return 0;
}