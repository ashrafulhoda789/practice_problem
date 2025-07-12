#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int n;
    cin >> n;

    while(1){
        int temp = n+1;
        int a = temp%10;
        temp /= 10;
        int b = temp%10;
        temp /= 10;
        int c = temp%10;
        temp /= 10;
        int d = temp%10;

        if(a != b && a  != c && a != d && b != c && b != d && c != d) break;
        else n++;
    }

    cout << n + 1 << "\n";
      
    return 0;
}