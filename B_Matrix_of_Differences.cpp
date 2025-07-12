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

        int a = n*n,b = 1;
        vector<vector<int>> v(n,vector<int>(n));
        for(int i=0; i<n; i++){
            
            if(i%2 == 0){
                for(int j=0; j<n; j++){
                    if(j%2 == 0) 
                        v[i][j] = a--;
                    else 
                        v[i][j] = b++;
                }
            }
            else{
                for (int j = n-1; j >= 0; j--)
                {
                    if(j%2 == 0) 
                        v[i][j] = b++;
                    else 
                        v[i][j] = a--;
                }
                
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << v[i][j] << " ";
            }
            cout << "\n";
        }
        
    }
      
    return 0;
}