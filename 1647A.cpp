/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1647/problem/A

//                      Codeforces Round #777 (Div. 2)
//                         A. Madoka and Math Dad

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	int ans = 0;
	string str = "";
	int i = 0;
	while (ans != n and ans < n) {
		if (i % 2 == 0) {
			ans += 2;
			str += '2';
		} else {
			ans += 1;
			str += '1';
		}
		i++;
	}
	if (ans == n) {
		cout << str << endl;
		return;
	}
	ans = 0, i = 0;
	string str1 = "";
	while (ans != n and ans < n) {
		if (i % 2 != 0) {
			ans += 2;
			str1 += '2';
		} else {
			ans += 1;
			str1 += '1';
		}
		i++;
	}
	cout << str1 << endl;
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