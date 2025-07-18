#include<bits/stdc++.h>
using namespace std;

const int maxB = (1LL << 15);
vector<int> allPalindrome;

bool isPalindrome(int x){
    string s = to_string(x);
    int len = s.size();

    for(int i=0; i<len/2; i++){
        if(s[i] != s[len-1-i]){
            return false;
        }
    }

    return true;
}

void makePalindrome(){
    for(int i=0; i<maxB; i++){
        if(isPalindrome(i)){
            allPalindrome.push_back(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    makePalindrome();

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n),cnt(maxB + 1);
        for(int i=0; i<n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }

        long long ans = n;
        for(int i=0; i<n; i++){
            for(int j=0; j<allPalindrome.size(); j++){
                int curr = (a[i]^allPalindrome[j]);
                ans += cnt[curr];
            }
        }

        cout << ans/2 << "\n";
        
    }
      
    return 0;
}