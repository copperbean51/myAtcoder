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
int QueryType[100009], y[100009];
string x[100009];
map<string, int> Map;

/*
テンプレート第一引数のstd::stringがkey
テンプレート第二引数のintがvalue

mapはkeyからvalueを検索するのが得意である.
mapを利用する理由の殆どはその高速な値の検索にあると言って良い.
*/

int main() {
	// 入力
	cin >> Q;
	for (int i = 1; i <= Q; i++) {
		cin >> QueryType[i];
		if (QueryType[i] == 1) cin >> x[i] >> y[i];
		if (QueryType[i] == 2) cin >> x[i];
	}

	// クエリの処理
	for (int i = 1; i <= Q; i++) {
        // クエリ 1：生徒 x の成績が y 点になったと登録される
		if (QueryType[i] == 1) Map[x[i]] = y[i];

		// クエリ 2：生徒 x の成績を答える
        if (QueryType[i] == 2) cout << Map[x[i]] << endl;
	}
	return 0;
}