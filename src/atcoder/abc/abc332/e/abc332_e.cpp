#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using i64 = long long;
using i128 = __int128_t;
#define rep(i,n) for(i64 i=0; i<(i64)(n); i++)
template<typename A> void chmin(A& l, const A& r){ if(r < l) l = r; }

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    i64 INF = 0x3FFF'FFFF'FFFF'FFFF;
    
    i64 N, D; cin >> N >> D;
    vector<i64> W(N);
    rep(i,N) cin >> W[i];
    vector<i64> A(1<<N);
    rep(d,N) rep(i,1<<d) A[i+(1<<d)] = A[i] + W[d];
    i64 s = A[(1<<N)-1];
    rep(i,1<<N) A[i] = A[i] * A[i];
    auto dp = vector<i64>(1<<N, INF);
    dp[(1<<N)-1] = 0;
    i64 mindp = INF;
    rep(d,D){
        rep(i,1<<(N-d)){
            int rem = (1<<(N-d)) - 1 - i;
            for(int j=rem; j>0; j=(j-1)&rem){
                chmin(dp[i], dp[i+j] + A[j]);
            }
        }
        chmin(mindp, dp[0]);
    }
    cout.precision(20);
    cout << fixed;
    double ans = double((i128)mindp * D - (i128)s * s) / D / D;
    cout << ans << endl;
    return 0;
}
