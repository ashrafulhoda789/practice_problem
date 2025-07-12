#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    int total = 0;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        total += v[i];
    }

    sort(v.begin(),v.end());
    int sum = 0,cnt = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += v[i];
        if(total-sum >= sum){
            cnt++;
        }
    }

    cout << cnt << "\n";
    
      
    return 0;
}