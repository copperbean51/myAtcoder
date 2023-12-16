#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
#define rep(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using mint = atcoder::modint998244353;

struct F {
  mint pro;
  mint val;
};

F op(F l, F r) {
  l.pro = l.pro * r.pro;
  l.val = r.pro * l.val + r.val;
  return l;
}

F e() {
  return {1, 0};
}

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];
  vector<vector<pair<int, F>>> G(N + 1);
  segtree<F, op, e> seg(M);
  vector<mint> inv(N + 1, 1);
  int P = 998244353;
  // 逆元の前計算
  rep(i, 2, N + 1) {
    inv[i] = inv[P % i] * (-(P / i));
  }
  
  rep(i, 0, M) {
    int l, r, x;
    cin >> l >> r >> x;
    l--;
    G[l].push_back({i, {1 - inv[r - l], inv[r - l] * x}});
    G[r].push_back({i, e()});
  }
  
  rep(i, 0, N) {
    if (i) cout << " ";
    for (auto[ind, x]: G[i]) seg.set(ind, x);
    auto tmp = seg.all_prod();
    mint ans = tmp.val + tmp.pro * A[i];
    cout << ans.val();
  }
  cout << "\n";
}
