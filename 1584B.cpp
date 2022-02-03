/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1584/problem/B

//                 Technocup 2022 - Elimination Round 2
//                        B. Coloring Rectangles

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n,m; cin >> n >> m;
	cout << ((n*m)%3 == 0  ? (n*m)/3: (n*m)/3+1) << endl;
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