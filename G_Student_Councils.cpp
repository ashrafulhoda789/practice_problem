#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int k,n;
    cin >> k >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    auto ok = [&](long long mid){
        long long sum = 0;
        for(int i=0; i<n; i++){
            if(v[i] > mid) sum += mid;
            else sum += v[i];
        }

        return (sum/mid) >= k;
    };

    long long l =0, r = 25e9, ans ,mid;
    while(l <= r){
        mid = l + (r-l)/2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }

    cout << ans << "\n";
      
    return 0;
}