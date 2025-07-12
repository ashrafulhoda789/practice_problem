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

    stack<int> st;

    for(int i=0; i<n; i++){
        while(!st.empty() && v[st.top()]>=v[i]){
            st.pop();
        }
        if(st.empty()){
            cout << 0 << " ";
        }
        else{
            cout << st.top()+1 << " ";
        }

        st.push(i);
    }
      
    return 0;
}