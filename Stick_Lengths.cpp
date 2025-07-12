#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    int mid = v[n/2];
    //cout << n/2 << " " << mid << "\n";
    long long ans = 0;

    for(int i=0; i<n; i++){
        ans += abs(mid-v[i]);
    }

    cout << ans << "\n";
      
    return 0;
}