#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,x;
    cin >> n >> x;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<pair<int,int>> res;
    for(int i=0; i<n; i++){
        res.push_back({v[i],i+1});
    }

    sort(res.begin(),res.end());
    // for(auto i : res){
    //     cout << i.first << " " << i.second << "\n";
    // }
      
    for(int i=0; i<n-2; i++){
        int j=i+1;
        int k=n-1;

        while(j < k){
            ll sum = res[i].first+res[j].first+res[k].first;
            if(sum == x){
                cout << res[i].second << " " << res[j].second << " " << res[k].second << "\n";
                return 0;
            }
            else if(sum > x){
                k--;
            }
            else if(sum < x){
                j++;
            }
        }
        
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}