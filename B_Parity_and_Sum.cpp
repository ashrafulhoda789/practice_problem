#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        long long n,mx_odd=0;
        cin >> n;

        vector<long long> v;
        for(int i=0; i<n; i++){
            long long x;
            cin >> x;

            if(x%2 != 0){
                if(mx_odd < x){
                    mx_odd = x;
                }
            }else{
                v.push_back(x);
            }
        }

        long long len = v.size();
        if(v.size() == n){
            cout << "0\n";
            continue;
        }

        long long cnt = len;
        sort(v.begin(),v.end());

        for(int i=0; i<len; i++){
            if(mx_odd > v.back())break;
            else if(mx_odd < v[i]) {
                cnt++;
                break;
            }else{
                mx_odd += v[i];
            }
        }

        cout << cnt << "\n";
    }
      
    return 0;
}