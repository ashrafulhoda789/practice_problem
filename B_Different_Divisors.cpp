#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e6 + 9;
vector<int> allPrimes;

void sieve(){
    vector<bool> prime(maxN+1, true);
    for(int i=2; i*i<=maxN; i++){
        if(prime[i]){
            for(int j=i+i; j<=maxN; j+=i){
                prime[j] = false;
            }
        }
    } 

    for(int i=2; i<=maxN; i++){
        if(prime[i]){
            allPrimes.push_back(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    sieve();

    int t;
    cin >> t;

    while(t--){
        int d;
        cin >> d;

        int p = *lower_bound(allPrimes.begin(),allPrimes.end(),d+1);
        int q = *lower_bound(allPrimes.begin(),allPrimes.end(),p+d);

        cout << p*q << "\n";
    }
      
    return 0;
}