/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1473/problem/B

//                       Educational Codeforces Round 102 (Rated for Div. 2)
//                                  B. String LCM

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve() {
	string str1, str2;
	cin >> str1 >> str2;
	int size1 = str1.size();
	int size2 =  str2.size();
	int size = (size2 * size1) / (__gcd(size2, size1));
	string strA = "", strB = "";
	while (strA.size() != size) {
		strA += str1;
	}
	while (strB.size() != size) {
		strB += str2;
	}
	if (strA == strB) {
		cout << strA << endl;
	}
	else {
		cout << -1 << endl;
	}
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}
