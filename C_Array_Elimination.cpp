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

        vector<int> v(31,0);
        for(int i=0; i<n; i++){
            int x;
            cin >> x;

            for(int k=0; k<=__lg(x); k++){
                if(kth_bit_on_off(x,k)){
                    v[k]++;
                }
            }
        }

        for(int i=1; i<=n; i++){
            bool ok = true;
            for(int j=0; j<31; j++){
                if(v[j]%i){
                    ok = false;
                    break;
                }
            }

            if(ok){
                cout << i << " ";
            }
        }
        cout << "\n";
        
    }
      
    return 0;
}