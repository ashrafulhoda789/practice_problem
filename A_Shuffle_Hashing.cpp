#include <bits/stdc++.h>
using namespace std;

bool isSame(map<char, int> &a, map<char, int> &b)
{
    return a == b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string p, h;
        cin >> p >> h;

        if (p.size() > h.size()){
            cout << "NO" << endl;
            continue;
        }

        map<char, int> mp1, mp2;
        for (char c : p){
            mp1[c]++;
        }
           
        for (int i = 0; i < p.size(); i++){
            mp2[h[i]]++;
        }
            

        bool ok = false;
        int i = 0, j = p.size() - 1;

        while (j < h.size()){
            if (isSame(mp1, mp2)){
                ok = true;
                break;
            }

            mp2[h[i]]--;
            if (mp2[h[i]] == 0)
                mp2.erase(h[i]);
            i++;
            j++;
            if (j < h.size())
                mp2[h[j]]++;
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
