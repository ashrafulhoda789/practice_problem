#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n%2 != 0){
            cout << "0\n";
            continue;
        }

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        long long sum = 0;
        for(int i=0; i<n/2; i++){
            sum += abs(v[i]-v[n-1-i]);
        }

        cout << sum << "\n";
        
    }
      
    return 0;
}