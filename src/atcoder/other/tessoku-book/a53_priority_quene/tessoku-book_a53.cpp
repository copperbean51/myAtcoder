#pragma GCC optimize("Ofast")

#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

#define ll long long
#define vec vector<int>
#define vecd vector<double>
#define vecll vector<ll>
#define Graph vector<vector<int>>
#define wGraph vector<vector<Edge>>


int Q;
int QueryType[100009], x[100009];
priority_queue<int, vector<int>, greater<int>> T;

int main() {
	// 入力
	cin >> Q;
	for (int i = 1; i <= Q; i++) {
		cin >> QueryType[i];
		if (QueryType[i] == 1) cin >> x[i];
	}

	// クエリの処理
	for (int i = 1; i <= Q; i++) {
		// クエリ 1：価格が x 円の商品が追加される
		if (QueryType[i] == 1) {
			T.push(x[i]);
		}
		
		// クエリ 2：今ある商品の中の最小価格を答える
		if (QueryType[i] == 2) cout << T.top() << endl;
		
		// クエリ 3：最も安い商品が 1 つ売れる
		if (QueryType[i] == 3) T.pop();
	}
	return 0;
}

