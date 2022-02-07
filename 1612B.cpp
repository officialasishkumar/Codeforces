/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1612/problem/B

//            Educational Codeforces Round 117 (Rated for Div. 2)
//                       B. Special Permutation

#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	vector<int> vec;
	if (a == b || a > n / 2 + (b <= n / 2) || b < n / 2 + (a <= n / 2)) {	
		cout << -1 << endl;
		return;
	}
	vec.push_back(a);
	for(int i{n}; i>0; i--){
		if(i!=a and i!=b)
			vec.push_back(i);
	}
	vec.push_back(b);
	for(auto v: vec){
		cout << v << " ";
	}
	cout << endl;
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