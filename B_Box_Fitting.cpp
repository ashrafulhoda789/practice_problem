#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n,w;
        cin >> n >> w;

        multiset<int> ml;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            ml.insert(x);
        }

        int h = 1;
        int space = w;

        while(!ml.empty()){
            auto it = ml.upper_bound(space);
            if(it != ml.begin()){
                it--;
                int val = *it;
                space -= val;
                ml.erase(it);
            }else{
                space = w;
                h++;
            }
        }
        cout << h << "\n";
    }
      
    return 0;
}