/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1604/problem/B

//                 Codeforces Round #752 (Div. 2)   
//                       B. XOR Specia-LIS-t

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	vector <int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	if (n % 2 == 0) {
		cout << "YES" << endl;
		return;
	}
	for (int i = 0; i < n - 1; i++) {
		if (vec[i] >= vec[i + 1]) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
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