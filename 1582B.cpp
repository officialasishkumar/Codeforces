/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/problemset/problem/1582/B

//                 Codeforces Round #750 (Div. 2)
//                    B. Luntik and Subsequences


#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n; cin >> n;
	vector <ll> vec(n);
	for (ll i = 0; i < n; i++)	cin >> vec[i];
	sort(vec.begin(), vec.end());
	ll count0 = count(vec.begin(), vec.end(), 0);
	ll count1 = count(vec.begin(), vec.end(),1);
	cout << count1*(1ll<<count0) << endl;
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
