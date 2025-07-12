#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int k,n,m;
        cin >> k >> n >> m;

        vector<int> a(n);
        vector<int> b(m);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        
        for(int i=0; i<m; i++){
            cin >> b[i];
        }

        vector<int> v;
        int i=0,j=0;
        bool flag = true;
        while(i < n || j < m){
            int l = i;
            int r = j;
            while(i < n){
                if(a[i]==0){
                    v.push_back(a[i]);
                    k++;
                    i++;
                }
                else if(a[i] <= k){
                    v.push_back(a[i]);
                    i++;
                }else{
                    break;
                }
            }

            while(j < m){
                if(b[j]==0){
                    v.push_back(b[j]);
                    k++;
                    j++;
                }
                else if(b[j] <= k){
                    v.push_back(b[j]);
                    j++;
                }else{
                    break;
                }
            }

            if(l == i && r == j){
                flag = false;
                break;
            }
        }

        if(flag){
            for(auto i : v){
                cout << i << " ";
            }
            cout << "\n";
        }
        else cout << "-1\n";
        
    }
      
    return 0;
}