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

    int mx = v[0];
    int mn = v[0];
    int mn_i = 0,mx_i=0;

    for(int i=1; i<n; i++){
        
        if(v[i] <= mn){
            mn = v[i];
            mn_i = i;
        }

        if(v[i] > mx){
            mx = v[i];
            mx_i = i;
        }
    }

    if(mn_i < mx_i){
        mn_i = (n-1)-mn_i;
        cout << (mn_i + mx_i)-1 << "\n";
    }else{
        mn_i = (n-1)-mn_i;
        cout << (mn_i + mx_i) << "\n";
    }
      
    return 0;
}