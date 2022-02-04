/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1567/problem/B

//                 Codeforces Round #742 (Div. 2)
//                         B. MEXor Mixup

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int a, b; cin >> a >> b;
	int Xor;
    if (a % 4 == 1) Xor = a - 1;
    else if (a % 4 == 2) Xor = 1;
    else if (a % 4 == 3) Xor = a;
    else Xor = 0;
	if(Xor == b){
		cout << a << endl;
		return;
	} else if((Xor^b) != a){
		cout << a + 1 << endl;
 	} else if((Xor^b) == a){
		 cout << a + 2 << endl;
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