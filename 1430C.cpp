/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1430/problem/C

//                 Educational Codeforces Round 96 (Rated for Div. 2)
//                          C. Numbers on Whiteboard

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	multiset<int> s;
	for(ll i = 1; i<=n; i++) {
		s.insert(i);
	}
	vector <pair<ll, ll>> vec1;
	while(s.size() != 1){
		auto it = --s.end();
		int a = *it;
		s.erase(it);
		it = --s.end();
		int b = *it;
		s.erase(it);
		s.insert((a+b+1)/2);
		vec1.emplace_back(a, b);
	}
	cout << *s.begin() << endl;
	for(auto pr : vec1){
		cout << pr.first << ' ' << pr.second << endl;
	}
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
