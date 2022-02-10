/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/912/problem/B

//                   Codeforces Round #320 (Div. 2) [Bayan Thanks-Round]
//                               A. Raising Bacteria

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	cout << __builtin_popcount(n) << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
}