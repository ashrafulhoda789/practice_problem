#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<long long> pre(n+1);
    vector<long long> suf(n+1);
    pre[0] = 0;
    suf[n] = 0;

    for(int i=0; i<n; i++){
        pre[i+1] = pre[i]+v[i];
    }
    
    for(int i=n-1; i>=0; i--){
        suf[i] = suf[i+1] + v[i];
    }

    int l=0,r=n;
    long long ans = 0;
    while(l <= r){
        if(pre[l] == suf[r]){
            ans = pre[l];
            l++;
            r--;
        }
        while(pre[l] > suf[r])r--;
        while(pre[l] < suf[r])l++;
    }

    cout << ans << "\n";
    return 0;
}