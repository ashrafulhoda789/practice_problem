#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    ll n,m;
    cin >> n >> m;

    vector<ll> v(n);
    vector<ll> s(m);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<m; i++){
        cin >> s[i];
    }


    int i=0,j=0;
    int cnt = 0;

    while(j<m){
        if((i<n) && (v[i] < s[j])){
            i++;
            cnt++;
        }
        else{
            j++;
            cout << cnt << " ";
        }
    }

    
      
    return 0;
}