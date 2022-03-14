/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/892/problem/B

//                Codeforces Round #446 (Div. 2)
//                        B. Wrath

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(1000005);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		a[i] = min(a[i], i);
	}
	int alive = n , ans = 0;
	for (int i = n; i > 0; i--) {
		if (alive >= i) ans++;
		alive = min(alive, i - a[i] - 1);
	}
	cout << ans << endl;
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