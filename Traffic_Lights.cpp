#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int x,n;
    cin >> x >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    set<pair<int,int>> s;
    s.insert({0,x});
    
    multiset<int> ms;
    ms.insert(x);

    for(int i=0; i<n; i++){
        int p = v[i];

        auto it = s.upper_bound({p,0});
        it--;

        int l = it->first;
        int r = it->second;

        //cout << l << " " << r << "\n";

        s.erase(it);

        ms.erase(ms.find(r-l));

        s.insert({l,p});
        s.insert({p,r});

        ms.insert(p-l);
        ms.insert(r-p);

        cout << *ms.rbegin() << " ";
    }
    cout << "\n";
      
    return 0;
}