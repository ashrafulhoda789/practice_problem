#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,m;
    cin >> n >> m;

    vector<ll> v(n);
    vector<ll> s(m);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<m; i++){
        cin >> s[i];
    }

    int i=0,j=0;
    ll ans=0;
    while(i < n && j < m){
        ll curr = v[i],cnt1=0,cnt2=0;

        while(i < n && v[i] == curr){
            cnt1++;
            i++;
        }
        while(curr > s[j]) j++;

        while(j < m && s[j] == curr){
            cnt2++;
            j++;
        }

        ans += cnt1*cnt2;
    }

    cout << ans << "\n";

      
    return 0;
}