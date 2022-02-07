/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1634/problem/A

//                 Codeforces Round #770 (Div. 2)
//                   A. Reverse and Concatenate

#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool checkPalindrome(string str){
	string str1 = str;
	reverse(str.begin(), str.end());
	if(str1 == str){
		return true;
	} else {
		return false;
	}
}

void solve() {
	int n, k; cin >> n >> k;
	string str; cin >> str;
	if(k==0){
		cout << 1 << endl;
		return;
	}
	if(checkPalindrome(str)){
		cout << 1 << endl;
		return;
	} else {
		cout << 2 << endl;
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