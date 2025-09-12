// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     if(!(cin >> t)) return 0;
//     while(t--){
//         int n; cin >> n;
//         vector<ll>a(n+1);
//         for(int i=1;i<=n;i++) cin >> a[i];

//         // initial alternating sum S0 = a1 - a2 + a3 - a4 + ...
//         ll S0 = 0;
//         for(int i=1;i<=n;i++){
//             if(i%2==1) S0 += a[i];
//             else S0 -= a[i];
//         }

//         // best same-parity distance:
//         int firstOdd = -1, lastOdd = -1, firstEven = -1, lastEven = -1;
//         for(int i=1;i<=n;i++){
//             if(i%2==1){
//                 if(firstOdd==-1) firstOdd = i;
//                 lastOdd = i;
//             } else {
//                 if(firstEven==-1) firstEven = i;
//                 lastEven = i;
//             }
//         }
//         ll bestSame = 0;
//         if(firstOdd != -1 && lastOdd != -1) bestSame = max(bestSame, (ll)(lastOdd - firstOdd));
//         if(firstEven != -1 && lastEven != -1) bestSame = max(bestSame, (ll)(lastEven - firstEven));

//         // best odd-even net (|o-e| + 2*(a_even - a_odd))
//         // We compute both orientations in one pass:
//         const ll INF = (1LL<<62);
//         ll minOddTerm = INF;      // min of (2*a_o + o) for odd o seen so far
//         ll minEvenNegTerm = INF;  // min of (-2*a_e + e) for even e seen so far
//         ll bestOddEven = LLONG_MIN;

//         for(int i=1;i<=n;i++){
//             if(i%2==1){
//                 // i is odd
//                 // case o > e  -> candidate = (-2*a_o + o) - minEvenNegTerm
//                 if(minEvenNegTerm != INF){
//                     ll cand = (-2LL * a[i] + i) - minEvenNegTerm;
//                     bestOddEven = max(bestOddEven, cand);
//                 }
//                 // update minOddTerm for future even positions e>o
//                 ll termOdd = 2LL * a[i] + i;
//                 if(termOdd < minOddTerm) minOddTerm = termOdd;
//             } else {
//                 // i is even
//                 // case e > o -> candidate = (2*a_e + e) - minOddTerm
//                 if(minOddTerm != INF){
//                     ll termEven = 2LL * a[i] + i;
//                     ll cand = termEven - minOddTerm;
//                     bestOddEven = max(bestOddEven, cand);
//                 }
//                 // update minEvenNegTerm for future odd positions o>e
//                 ll termEvenNeg = -2LL * a[i] + i;
//                 if(termEvenNeg < minEvenNegTerm) minEvenNegTerm = termEvenNeg;
//             }
//         }
//         if(bestOddEven == LLONG_MIN) bestOddEven = LLONG_MIN/4; // no odd-even pair exists (n==1) -> won't be used

//         ll bestGain = max(bestSame, (bestOddEven>LLONG_MIN/4? bestOddEven : LLONG_MIN/4));
//         if(bestGain < 0) bestGain = 0; // Alice won't make a move decreasing f

//         ll ans = S0 + bestGain;
//         cout << ans << '\n';
//     }
//     return 0;
// }
/* Author: Ashraful Hoda Jamshed */
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T, null_type, less_equal<T>, 
        rb_tree_tag,tree_order_statistics_node_update>; 

#define ll long long
const int maxN = 1e5 + 9;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> v(n+1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        ll sum = 0;
        for(int i = 1; i <= n; i++){
            if(i%2 == 1) sum += v[i];
            else sum -= v[i];
        }

        ll f_o = -1, l_o = -1, f_e = -1, l_e = -1;
        for(int i = 1; i <= n; i++){
            if(i%2 == 1){
                if(f_o == -1) f_o = i;
                l_o = i;
            }
            else{
                if(f_e == -1){
                    f_e = i;
                }
                l_e = i;
            }
        }

        ll mx = 0;
        if(f_e != -1 && l_e != -1){
            mx = max(mx, (l_e - f_e));
        }

        if(f_o != -1 && l_o != -1){
            mx = max(mx, (l_o - f_o));
        }

        ll mn_odd = LLONG_MAX;
        ll mn_even = LLONG_MAX;
        ll best = LLONG_MIN;

        for(int i = 1; i <= n; i++){
            if(i%2 == 1){
                
            }
        }
    }
      
    return 0;
}