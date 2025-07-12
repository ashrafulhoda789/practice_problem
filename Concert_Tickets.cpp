#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,m;
    cin >> n >> m;

    multiset<int> ml;
    for(int i=0; i<n; i++){
        int h;
        cin >> h;
        ml.insert(h);
    }

    for(int i=0; i<m; i++){
        int t;
        cin >> t;

        auto it = ml.upper_bound(t);
        //cout << *it << "\n";

        if(it == ml.begin()){
            cout << "-1\n";
        }
        else{
            cout << *(--it) << "\n";
            ml.erase(it);
        }
    }

    
      
    return 0;
}