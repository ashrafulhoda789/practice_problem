#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        string s = "";
        if(n > 0 && m > 0){
            s.append(2*n, '<'); 
            for(int i=0; i<m-1; i++){
                s += "><";
            }

            s += ">";
        }
        else if(n > 0){
            if(n == 1) s += "<";
            else{
                s.append(2*n-3,'<');
                s += "=<";
            }

        }
        else{
            if(m==1) s += ">";
            else{
                s += ">";
                for(int i=0; i<m-2; i++){
                    s += "<>";
                }

                s += "=>";
            }

        }

        cout << s << "\n";
        
    }
      
    return 0;
}