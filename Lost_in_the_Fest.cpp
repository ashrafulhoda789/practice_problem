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

        vector<int> v(n+5);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        int index = 0;
        for(int i=n; i>=1; i--){
            if(v[i] >= v[n]){
                //swap(v[n-1],v[i]);
                index = i;
            }
        }

        cout << n-index << "\n";
    }
      
    return 0;
}