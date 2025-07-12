#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> v;
        int i=1,j=n;
        while(i < n && j > k){
            while(i <= k){
                v.push_back(i);
                i++;
            }
            while(j > k){
                v.push_back(j);
                j--;
            }
        }

        for(auto i : v){
            cout << i << " ";
        }
        cout << "\n";
        
    }
      
    return 0;
}