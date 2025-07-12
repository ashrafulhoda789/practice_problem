#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int i=0,cnt = 0;
        ll sum = 0;
        bool flag = false;
    
        while(i < n){
            sum += abs(v[i]);

            if(v[i] < 0 && !flag){
                flag = true;
                cnt++;
            }
            if(v[i] > 0){
                flag = false;
            }
            i++;
        }
        cout << sum << " " << cnt << "\n";
    }
      
    return 0;
}