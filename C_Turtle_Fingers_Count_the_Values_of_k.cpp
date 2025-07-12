#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int a,b,l;
        cin >> a >> b >> l;

        int ac = 1, bc = 1;

        if(a == 1 && b == 1){
            cout << 1 << "\n";
            continue;
        }

        int tmp = l;
        while(tmp%a == 0 && tmp > 0){
            ac++;
            tmp /= a;
        }

        tmp = l;
        while(tmp%b == 0 && tmp > 0){
            bc++;
            tmp /= b;
        }

        set<int> ans;
        for(int i=0; i<ac; i++){
            for(int j=0; j<bc; j++){
                ll k = round(pow(a,i)*pow(b,j));

                if(k > l) continue;
                else{
                    if(l%k == 0){
                        ans.insert(l/k);
                    }
                    else{
                        continue;
                    }
                }
            }
        }

        cout << ans.size() << "\n";
        
    }
      
    return 0;
}