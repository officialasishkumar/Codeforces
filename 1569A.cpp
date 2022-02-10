/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/579/problem/A

//                       Educational Codeforces Round 113 (Rated for Div. 2)
//                                   A. Balanced Substring

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	string str; cin >> str;
	int countA = 0, countB = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] == 'a')
			countA++;
		else
			countB++;
	}
	if (countB == 0 or countA == 0) {
		cout << -1 << ' ' << -1 << endl;
		return;
	}
	if (countB == countA) {
		cout << 1 << ' ' << n << endl;
		return;
	}
	for (int i = 1; i < n; i++) {
		if (str[i] != str[i - 1]) {
			cout << i  << ' ' << i + 1 << endl;
			return;
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
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}