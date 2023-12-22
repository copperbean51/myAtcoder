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
int QueryType[100009]; string x[100009];
queue<string> T;

int main() {
	// 入力
	cin >> Q;
	for (int i = 1; i <= Q; i++) {
		cin >> QueryType[i];
		if (QueryType[i] == 1) cin >> x[i];
	}

	// クエリの処理
	for (int i = 1; i <= Q; i++) {
		// クエリ 1：行列の最後尾に x さんが並ぶ
		if (QueryType[i] == 1) T.push(x[i]);
		
		// クエリ 2：行列の先頭にいる人の名前を答える
		if (QueryType[i] == 2) cout << T.front() << endl;
		
		// クエリ 3：行列の先頭にいる人を列から抜けさせる
		if (QueryType[i] == 3) T.pop();
	}
	return 0;
}
