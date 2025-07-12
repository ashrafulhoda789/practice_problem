#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    multiset<int> ms;

    int ans = 0;
    for(int i=0; i<n; i++){
        auto it = ms.upper_bound(v[i]);
        //cout << *it << "\n";

        if(it == ms.end()){
            ans++; 
            ms.insert(v[i]);
        }
        else{
            ms.erase(it);
            ms.insert(v[i]);
        }
    }

    cout << ans << "\n";
    return 0;
}