/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1611/problem/C

//                 Codeforces Round #756 (Div. 3)
//             C. Polycarp Recovers the Permutation


#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	vector <int> vec(n);
	for(int i{}; i<n; i++) cin >> vec[i];
	if(vec.back() != *max_element(vec.begin(), vec.end()) and vec.front() != *max_element(vec.begin(), vec.end())){
		cout << -1 << endl; return;
	}
	if(vec.back() == *max_element(vec.begin(), vec.end())){
		for(int i = n-2; i>=0; i--){
			cout << vec[i] << ' ';
		}
		cout << vec.back() << endl;
	} else {
		for(int i = n-1; i>0; i--){
			cout << vec[i] << ' ';
		}
		cout << vec.front() << endl;
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