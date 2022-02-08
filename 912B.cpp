/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/912/problem/B

//                        Codeforces Round #456 (Div. 2)
//                               B. New Year's Eve


#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, k; cin >> n >> k;
	if (k == 1) {
		cout << n << endl;
		return;
	}
	ll x = 1;
	while (x <= n) x *= 2;
	cout << x - 1 << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// int t; cin >> t;
	// while (t--) {
	// 	solve();
	// }
	solve();
}