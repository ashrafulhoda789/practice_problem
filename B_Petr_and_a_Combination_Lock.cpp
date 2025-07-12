#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    bool ok = false;
    for(int mask = 0; mask<(1 << n); mask++){
        int sum = 0;
        for(int i=0; i<n; i++){
            if((mask >> i)&1){
                sum += a[i];
            }
            else{
                sum -= a[i];
            }
        }

        if(sum%360 == 0){
            ok = true;
            break;
        }
    }

    if(ok) cout << "YES\n";
    else cout << "NO\n";
      
    return 0;
}