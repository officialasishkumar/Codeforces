/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1324/problem/B

//                          Codeforces Round #627 (Div. 3)
//                        B. Yet Another Palindrome Problem

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (vec[i] == vec[j] and j - i + 1 >= 3) {
				cout << "YES" << endl;
				return;
			}
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
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}