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

    int i=0,j=0;
    long long ans=0,sum=0;
    while(j < n){
        sum += v[j];
        if(sum <= s){
            ans += (j-i+1);
        }else{
            while(sum > s){
                sum -= v[i];
                i++;
            }
            if(sum <= s && i <= j){
                ans += (j-i+1);
            }
        }
        j++;
    }

    cout << ans << "\n";
      
    return 0;
}