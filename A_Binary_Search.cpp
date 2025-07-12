#include<bits/stdc++.h>
using namespace std;

bool isFound(vector<int> a, int key){
    int n = a.size();
    int l=0,r=n-1;
    while(l<=r){
        int mid = (l+r)/2;

        if(a[mid] == key){
            return true;
        }
        else if(a[mid] < key){
            l = mid + 1;
        }
        else if(a[mid] > key){
            r = mid - 1;
        }
    }

    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    while(k--){
        int val;
        cin >> val;

        bool ok = isFound(v,val);
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
      
    return 0;
}