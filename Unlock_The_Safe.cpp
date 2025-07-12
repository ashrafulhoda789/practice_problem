#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k;

        vector<ll> a(n);
        vector<ll> b(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];

        int move = 0;

        vector<int> v;
        for(int i=0; i<n; i++){
            int cnt = min( abs(a[i]-b[i]), 9 - abs(a[i]-b[i]));
            int cnt2 = max( abs(a[i]-b[i]), 9 - abs(a[i]-b[i]));

            move += cnt;
            v.push_back(cnt2 - cnt);
        }

        int remain = k - move;

        int minDiff = INT_MAX;
        for(int i=0; i<v.size(); i++){
            minDiff = min(minDiff,v[i]);
        }

        if(remain < 0) cout << "No\n";
        else if(remain%2 == 0 || minDiff <= remain) cout << "Yes\n";
        else cout << "No\n";
        
    }
      
    return 0;
}