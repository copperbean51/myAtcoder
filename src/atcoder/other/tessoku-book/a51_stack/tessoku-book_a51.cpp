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
stack<string> S;

/*
stack 使い方
empty　→　コンテナが空かどうかチェック
pop　  →　要素を末尾から削除
push　 →　要素を末尾に追加
top　  →　末尾の要素を取得
size　 →　要素数を取得
*/

int main() {
	// 入力
	cin >> Q;
	for (int i = 1; i <= Q; i++) {
		cin >> QueryType[i];
		if (QueryType[i] == 1) cin >> x[i]; 
	}

	// クエリの処理
	for (int i = 1; i <= Q; i++) {
        // クエリ 1： x という題名の本を机の一番上に積む
		if (QueryType[i] == 1) S.push(x[i]);

        // クエリ 2：一番上に積まれている本の題名を答える
		if (QueryType[i] == 2) cout << S.top() << endl;

		// クエリ 3：一番上に積まれている本を机から取り出す
        if (QueryType[i] == 3) S.pop();
	}
	return 0;
}
