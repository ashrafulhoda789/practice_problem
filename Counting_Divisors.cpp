#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e6 + 9;
vector<int> divisors(maxN);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=1; i < maxN; i++){
        for(int j=i; j < maxN; j+=i){
            divisors[j]++;
        }
    }
      
    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;
        cout << divisors[x] << "\n";
    }
      
    return 0;
}