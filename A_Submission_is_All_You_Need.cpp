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

        vector<int> v(n),freq(51,0);
        for(int i=0; i<n; i++){
            cin >> v[i];

            freq[v[i]]++;
        }

        int ans = 0;
        for(int i=1; i<=50; i++){
            while(true){
                bool ok = true;
                for(int j=0; j < i; j++){
                    if(freq[j] == 0){
                        ok = false;
                        break;
                    }
                }

                if(!ok) break;

                int sum = 0;
                for(int j = 0; j < i; j++){
                    sum += j;
                }

                if(i > sum){
                    ans += i;
                    for(int j=0; j<i; j++){
                        freq[j]--;
                    }
                }
                else break;
            }
        }

        for(int i=0; i<=50; i++){
            if(freq[i] > 0){
                ans += i*freq[i];
            }
        }

        cout << ans << "\n";
    }

    
    return 0;
}