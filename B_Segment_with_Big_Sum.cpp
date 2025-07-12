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

    int r=0,ans = n+1;
    long long sum=0;
    for(int l=0; l<n; l++){
        sum += v[l];
        if(sum < s)continue;
        while(sum >= s){
            sum -= v[r++];
        }
        ans = min(ans,l-r+2);
    }

    if(ans > n) cout << "-1\n";
    else cout << ans << "\n";
      
    return 0;
}