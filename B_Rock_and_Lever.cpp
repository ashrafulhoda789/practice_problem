#include<bits/stdc++.h>
using namespace std;

const int maxB = 30;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n),cnt(maxB);
        for(int i=0; i<n; i++){
            cin >> a[i];
            cnt[__lg(a[i])]++;
        }

        // for(auto i : cnt){
        //     cout << i << " ";
        // }
        // cout << "\n";

        long long ans = 0;
        for(int i=0; i<maxB; i++){
            ans += (1LL * cnt[i]*(cnt[i]-1))/2;
        }

        cout << ans << "\n";

    }
      
    return 0;
}