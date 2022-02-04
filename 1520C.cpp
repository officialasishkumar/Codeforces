/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1520/problem/C

//                 Codeforces Round #719 (Div. 3)
//                     C. Not Adjacent Matrix

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	if(n<=2){
		if(n==1){
			cout <<1 << endl;
			return;
		} else {
			cout << -1 << endl;
			return;
		}
	}
	int arr[n][n];
	int k = 1;
	for(int i{}; i<n; i++){
		for(int j{}; j<n; j++){
			if(k <= pow(n, 2)){
				arr[i][j] = k;
				k+=2;
			} else {
				k = 2;
				arr[i][j] = k;
				k+=2;
			}
		}
	}
	for(int i{}; i<n; i++){
		for(int j{}; j<n; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
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
