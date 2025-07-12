#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n; 

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    int cnt = 0;
    for(int i=0; i<n; i++){
        if(v[i] >= cnt+1){
            cnt++;
        }
    }

    cout << cnt << "\n";
    return 0;
}