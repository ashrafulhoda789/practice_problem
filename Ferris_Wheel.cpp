#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,x;
    cin >> n >> x;

    vector<int> v;
    
    for(int i=1; i<=n; i++){
        int a;
        cin >> a;

        v.push_back(a);
    }

    sort(v.begin(),v.end());

    int ans = 0,j=0;
    for(int i = n-1; i>=j; i--){
        if(v[i] + v[j] <= x){
            j++;
        }
        ans++;
    }

    cout << ans << "\n";
      
    return 0;
}