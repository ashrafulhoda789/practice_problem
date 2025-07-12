#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,s;
        cin >> n >> s;

        vector<int> v(n);
        int total = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            total += v[i];
        }

        int l=0,r=0,ans = 0;
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += v[i];
            if(sum == s){
                ans = max(ans,(i-l+1));
            }else{
                while(sum > s){
                    sum -= v[l];
                    l++;
                }
            }
            
        }
        
        if(total < s)cout << "-1\n";
        else cout << n-ans << "\n";
        
    }
      
    return 0;
}