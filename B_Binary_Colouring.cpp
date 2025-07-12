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
        int x;
        cin >> x;

        int MSB = __lg(x);

        vector<int> ans(31,0);
        for(int i=0; i<30; i++){
            if(kth_bit_on_off(x,i)){
                if(ans[i]){
                    ans[i+1] = 1;
                    ans[i] = 0;
                }
                else if(i > 0){
                    if(ans[i-1] == 1){
                        ans[i+1] = 1;
                        ans[i-1] = -1;
                    }
                    else ans[i] = 1;
                }
                else if(i == 0){
                    ans[i] = 1;
                }
            }
        }

        cout << ans.size() << "\n";
        for(auto i : ans){
            cout << i << " ";
        }
        cout << "\n";
        
    }
      
    return 0;
}