#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

bool binary(int x){
    while(x > 0){
        int r = x%10;
        if(r != 0 && r!= 1){
            return false;
        }
        x /= 10;
    }

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> b;
    for(int i=2; i<=maxN; i++){
        if(binary(i)){
            b.push_back(i);
        } 
    }

    sort(b.begin(),b.end());
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(binary(n)){
            cout << "YES\n";
            continue;
        }

        int m = n;

        while(true){
            bool ok = false;
            for(auto i : b){
                if(m%i == 0){
                    m /= i;
                    ok = true;
                    break;
                }
            }

            if(!ok) break;
        }

        if(m == 1){
            cout << "YES\n";
        }
        else cout << "NO\n";
        
    }
      
    return 0;
}