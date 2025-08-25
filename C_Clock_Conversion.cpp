#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
vector<int> g[maxN];
vector<bool> vis(maxN);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        string s;
        cin  >> s;

        string hr;
        for(int i=0; i<2; i++){
            hr += s[i];
        }

        string mm;
        for(int i=3; i<s.size(); i++){
            mm += s[i];
        }

        int n = stoi(hr);
        int n_hr;
        string per;
        if( n == 12){
            n_hr = n;
            per = "PM";
        }
        else if(n == 0){
            n_hr = 12;
            per = "AM";
        }
        else if(n > 12){
            n_hr = n - 12;
            per = "PM";
        }
        else{
            n_hr = n;
            per = "AM";
        }

        cout << setw(2) << setfill('0') << n_hr << ":" << mm << " " << per << "\n";
    }
      
    return 0;
}