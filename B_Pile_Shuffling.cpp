#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long count = 0;

        for(int i=0; i<n; i++){
            int a,b,c,d;
            cin >> a >> b >> c >> d;

            if(a > c){
                count += (a-c);
                a -= (a-c);
            }

            if(b > d){
                count += (a + (b-d));
            }
        }

        cout << count << "\n";
    }

    return 0;
}
