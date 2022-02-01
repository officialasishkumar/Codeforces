/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1633/problem/C

//    Educational Codeforces Round 122 (Rated for Div. 2)
//                      C. Kill the Monster

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll h1, d1, h2, d2, k, w, a;
	cin >> h1 >> d1 >> h2 >> d2 >> k >> w >> a;
	if(ceil(((double)h1+k*a)/d2) >= ceil((double)h2/d1)){
		cout << "YES" << endl;
		return;
	} 
	for(ll i = 1; i <= k; i++){
		ll A = ceil(((double)h1+(k-i)*a)/d2);
		ll B = ceil((double)h2/(d1 + i*w));
		if(A >= B){
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