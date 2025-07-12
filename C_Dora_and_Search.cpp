#include<bits/stdc++.h>
using namespace std;

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

        int l=0,r=n-1;
        int mn=1,mx=n;
        bool flag = false;
        while(r >= l){
            if(v[r] == mx && v[l] == mn){
                r--; l++;
                mx--; mn++;
            }
            else if(v[r] == mx){
                r--;
                mx--;
            }
            else if(v[r] == mn){
                r--;
                mn++;
            }
            else if(v[l] == mn){
                l++;
                mn++;
            }
            else if(v[l] == mx){
                l++;
                mx--;
            }
            else{
                cout << l+1 << " " << r+1 << "\n";
                flag = true;
                break;
            }
        }
        if(!flag)
        cout << "-1\n";
    }
      
    return 0;
}