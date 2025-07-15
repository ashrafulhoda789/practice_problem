#include<bits/stdc++.h>
using namespace std;

const int maxN = 2e5 + 9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,k,q;
    cin >> n >> k >> q;

    map<int,int> d;
    for(int i=1; i<=n; i++){
        int l,r;
        cin >> l >> r;

        d[l] += 1;
        d[r+1] -=1;
    }

    map<int,int> pre;
    long long sum = 0;
    int last = d.begin()->first;

    for(auto i : d){
        int idx = i.first;
        int value = i.second;

        for(int j=last; j<idx; j++){
            pre[j] = sum;
        }
        sum += value;
        //pre.push_back({idx,sum});
        pre[idx] = sum;
        last = idx + 1;
    }

    // for(auto i : pre){
    //     cout << i.first << " " << i.second << "\n";
    // }

    vector<int> v(maxN);

    for(int i=1; i<=maxN; i++){
        if(pre[i] >= k){
            v[i] = 1;
        }
    }

    for(int i=1; i<=maxN; i++){
        v[i] += v[i-1];
    }

    
    while(q--){
        int a,b,cnt=0;
        cin >> a >> b;

        cout << v[b] - v[a-1] << "\n";
    }
      
    return 0;
}