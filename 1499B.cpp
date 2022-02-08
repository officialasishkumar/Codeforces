/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/problemset/problem/1499/B

//            Educational Codeforces Round 106 (Rated for Div. 2)
//                           B. Binary Removals

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	string str; cin >> str;
	string one = "11", zero = "00";
	if (str.find(one) != string::npos and str.rfind(zero) != string::npos and str.rfind(zero) > str.find(one)) {
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
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