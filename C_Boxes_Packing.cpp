#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      

    int n;
    cin >> n;

    vector<ll> v(n);
    map<ll, int> freq;
    for(int i=0; i<n; i++){
        cin >> v[i];
        freq[v[i]]++;
    }

    int mx=0;
    for(auto it : freq){
        mx = max(mx,it.second);
    }

    cout << mx << "\n";
   
      
    return 0;
}