/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1543/problem/A

//                  Codeforces Round #730 (Div. 2)
//                      A. Exciting Bets

#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
	ll a, b; cin >> a >> b;
	if(a==b){
		cout << 0 << ' ' << 0  << endl;
		return;
	}
	ll x = abs(a-b);
	if(a<b) swap(a,b);
	cout << x << ' ';
	ll y = 0;
	ll a1 = max(a%x , b%x);
	ll a2 = max(x-(a%x), x-(b%x));
	cout << min(a1, a2 ) << endl;
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