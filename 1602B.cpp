/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1602/problem/B

//                 Codeforces Round #751 (Div. 2)
//                        B. Divine Array

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
		int n; cin >> n;
	vector <int> vec(n), freq(n);
	vector <vector <int>> ans;
	for (int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	ans.push_back(vec);
	bool flag = false;
	while (freq != vec) {
		if (flag) {
			vec = freq;
		}
		for (int i = 0; i < n; i++) {
			int ctr = count(vec.begin(), vec.end(), vec[i]);
			freq[i] = ctr;
		}
		flag = true;
		ans.push_back(freq);
	}
	int q; cin >> q;
	while (q--) {
		int x, k;
		cin >> x >> k;
		if (k >= ans.size()) {
			cout << ans[ans.size() - 1][x - 1] << endl;
		} else {
			cout << ans[k][x - 1] << endl;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		solve();
	}
	// solve();
}