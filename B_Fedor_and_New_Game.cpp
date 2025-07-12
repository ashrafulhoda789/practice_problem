#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int b = __lg((1LL<<20)-1);
bool kth_bit_on_off(int n,int k){
    return ((n >> k)&1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,m,k;
    cin >> n >> m >> k;

    vector<int> v(m+1);
    for(int i=0; i< m+1; i++){
        cin >> v[i];
    }

    // for(auto i : v){
    //     cout << i << " ";
    // }

    int f = v[m];
    //cout << f << "\n";

    ll cnt = 0,ans = 0;
    for(int i=0; i<m; i++){
        for(int k=0; k<=b; k++){
            if(kth_bit_on_off(f,k) != kth_bit_on_off(v[i],k)) cnt++;
        }
        if(cnt <= k) ans++;
        cnt = 0;
    }

    cout << ans << "\n";
      
    return 0;
}