#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    long long s;
    cin >> n >> s;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l=0,r=0;
    long long sum = 0,ans=0;

    while(r < n){
        sum += v[r];
        while(sum >= s){
            sum -= v[l++];
        }
        r++;
        ans += l;
    }

    cout << ans << "\n";
      
    return 0;
}