/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1634/problem/C

//                 Codeforces Round #770 (Div. 2)
//                             C. OKEA

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	if(k==1){
		cout << "YES" << endl;
		for(int i=1; i<=n*k; i++){
			cout << i << endl;
		}
		return;
	}
	if((n&1)){
		cout << "NO" << endl;
		return;
	}
	else {
		cout << "YES" << endl;
		int m = 0;
		for(int i=1; i<=n*k; i+=2){
			cout << i << " ";
			m++;
			if(m == k){
				m = 0;
				cout << endl;
			}
		}
		
		int f= 0;
		for(int i=2; i<=n*k; i+=2){
			cout << i << " ";
			f++;
			if(f== k){
				f = 0;
				cout << endl;
			}
		}

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