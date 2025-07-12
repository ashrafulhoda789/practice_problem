#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        vector<long long> pre(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        pre[0] = v[0];
        for(int i=1; i<n; i++){
            pre[i] = pre[i-1]+v[i];
        }

        string s;
        cin >> s;

        int l=0,r=n-1;
        long long sum = 0;
        while(l < r){
            if(s[l] == 'R')l++;
            else if(s[r] == 'L')r--;
            else{
                if(l == 0){
                    sum += pre[r];
                }else{
                    sum += (pre[r] - pre[l-1]);
                }
                l++;
                r--;
            }
        }

        cout << sum << "\n";
        
    }
      
    return 0;
}