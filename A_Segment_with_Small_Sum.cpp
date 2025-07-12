#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    long long s;
    cin >> n >> s;

    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int i=0,j=0,ans = 0;
    long long sum = 0;
    while(j < n){
        sum += v[j];
        if(sum <= s){
            ans = max(ans,j-i+1);
        }
        else{
            sum -= v[i];
            i++;
        }
        j++;
    }

    cout << ans << "\n";
      
    return 0;
}