#include<bits/stdc++.h>
using namespace std;

bool kth_bit_on_off(int n, int k){
    return ((n >> k)&1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        int OR = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            OR |= v[i];
        }

        int MSB = __lg(OR);
        //cout << MSB << "\n";
        int ans = 1;
        for(int k=0; k<= MSB; k++){
            vector<int> pos;
            for(int i=0; i<n; i++){
                if(kth_bit_on_off(v[i],k)){
                    pos.push_back(i);
                }
            }
            
            int mx = 0,last = -1;
            for(auto x : pos){
                mx = max(mx,x - last);
                last = x;
            }

            mx = max(mx,n-last);
            if(last != -1){
                ans = max(ans,mx);
            }
        }

        cout << ans << "\n";
        
    }
      
    return 0;
}