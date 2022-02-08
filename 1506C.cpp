/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1506/problem/C

//                         Codeforces Round #710 (Div. 3)
//                             C. Double-ended Strings

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string a, b; cin >> a >> b;
	if (a == b) {
		cout << 0 << endl;
		return;
	}
	if (a.size() < b.size()) swap(a, b);
	size_t a_size = a.size();
	size_t b_size = b.size();
	int maxSub = 0;
	for (int i = 0; i < b_size; i++) {
		for (int j = i; j < b_size; j++) {
			string str = b.substr(i, j - i + 1);
			int size = str.size();
			if (a.find(str) !=  string::npos) {
				maxSub = max(maxSub, size);
			}
		}
	}
	cout << (a_size - maxSub) + (b_size - maxSub) << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}
