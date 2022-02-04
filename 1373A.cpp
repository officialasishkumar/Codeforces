/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1373/problem/A

//                 Educational Codeforces Round 90 (Rated for Div. 2)
//                                  A. Donut Shops


#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool IsPrime(int n) {
	for (int i{2}; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
void solve() {
	ll a, b, c;
	cin >> a >> b >> c;
	ll x, y;
	if(a >= c){
		x = -1;
	} else {
		x = 1;
	}
	if(a == b and c == b){
		cout << -1 << ' ' << a << endl;
		return;
	}
	// x  = 1;
	if(a*b <= c){
		y = -1;
	}
	else {
		y = b;
	}
	cout << x << ' ' << y << endl;

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