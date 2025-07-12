#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int i=0,j=0;
    multiset<long long> ml;
    long long ans = 0;

    while(j < n){
        ml.insert(v[j]);
        long long mn = *ml.begin();
        long long mx = *ml.rbegin();

        if(mx - mn <= k){
            ans += (j-i+1);
        }else{
            while(i <= j){
                mn = *ml.begin(),mx = *ml.rbegin();

                if(mx - mn <= k)break;
                ml.erase(ml.find(v[i]));
                i++;
            }

            mn = *ml.begin(),mx = *ml.rbegin();

            if(mx - mn <= k){
                ans += (j-i+1);
            }
        }
        j++;
    }
    
    cout << ans << "\n";
      
    return 0;
}