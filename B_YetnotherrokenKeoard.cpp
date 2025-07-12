#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        vector<int> small,cap;             //1 2 3 4 5 6 7 8 9 10 11 12 
        vector<bool> flag(s.size(),true); // F F F F F F T T F F  F  T

        for(int i=0; i<s.size(); i++){
            if(s[i] == 'b'){
                flag[i] = false;
                if(small.size() > 0){
                    flag[small.back()] = false;
                    small.pop_back();
                }
            }else if(s[i] == 'B'){
                flag[i] = false;
                if(cap.size() > 0){
                    flag[cap.back()] = false;
                    cap.pop_back();
                }
            }else if(s[i] >= 'a' && s[i] <= 'z'){
                small.push_back(i);    //7 8 12
            }
            else if(s[i] >= 'A' && s[i] <= 'Z'){
                cap.push_back(i);      //
            }
        }

        for(int i=0; i<s.size(); i++){
            if(flag[i]){
                cout << s[i];
            }
        }
        cout << "\n";
    }
      
    return 0;
}