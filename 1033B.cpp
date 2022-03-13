/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1033/problem/B

//          Lyft Level 5 Challenge 2018 - Elimination Round
//                        B. Square Difference

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	unsigned ll a, b; cin >> a >> b;
	if (a - b > 1) {
		cout << "NO" << endl;
		return;
	}
	long long x = a + b;
	bool prime = (x >= 2);
	for (long long i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			prime = false;
			break;
		}
	}
	cout << (prime ? "YES" : "NO") << endl;
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