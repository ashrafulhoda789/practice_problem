#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,total = 0;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        int x = i;
        map<int,int> cnt;
        for(int j=2; j*j <= x; j++){
            if(x%j == 0){
                while(x%j == 0){
                    cnt[j]++;
                    x /= j;
                }
            }
        }

        if(x > 1){
            cnt[x]++;
        }

        if(cnt.size() == 2){
            total++;
        }
    }
    
    cout << total << "\n";
    
    return 0;
}