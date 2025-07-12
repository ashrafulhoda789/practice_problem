#include<bits/stdc++.h>
using namespace std;

bool sorted(vector<int> arr){
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        vector<int> x,y;
        int mn = v[0],idx=n+1;
        x.push_back(mn);
        for(int i=1; i<n; i++){
            if(mn <= v[i]){
                mn = v[i];
                x.push_back(v[i]);
            }else{
                idx = i;
                break;
            }
        }

        for(int i=idx; i<n; i++){
            y.push_back(v[i]);
        }

        for(int i=0; i<x.size(); i++){
            y.push_back(x[i]);
        }

        if(sorted(y)){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
      
    return 0;
}