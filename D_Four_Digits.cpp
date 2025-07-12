#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s = to_string(n);

    int len = s.size();
    if(len == 4)
        cout << s << endl;
    if(len < 4){
        int extra = 4 - len;
        string s1;
        for(int i=0; i<extra; i++){
            s1.push_back('0');
        }
        s1.append(s);
        cout << s1 << endl;
    }


    return 0;
}