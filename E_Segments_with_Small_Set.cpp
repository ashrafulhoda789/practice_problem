#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l=0;
    long long ans = 0;
    map<int,int> cnt;

    for(int i=0; i<n; i++){
        cnt[v[i]]++;
        while(cnt.size() > k){
            cnt[v[l]]--;
            if(cnt[v[l]] == 0){
                cnt.erase(v[l]);
            }
            l++;
        }

        ans += (i-l+1);
    }    
    cout << ans << "\n";
      
    return 0;
}