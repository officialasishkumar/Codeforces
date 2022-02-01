/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1633/problem/B

/***********************************
 Explanation:
  This question was observation based. The question asks you to find the maximum number of characters that you can delete.
  We can only remove when '0' and '1' are not equal.
  If we take the entire string and count the 0s and 1s characters and if they are not equal then in that we can remove the maximum
  number of characters. Eg. No. of zeros  = 5 and No. of ones = 6, so we need to remove 5 according to the condition. We cannot remove more than
  five and any other substring. But if we traverse over the entire string and found that 0s and 1s are equal then the max elements we can
  remove is count of any one 0s and 1s characters minus 1. 

***********************************/

// It is advised to implement the code on your own before 
//  checking my solution.

// ----------------------------------------------------------------
//    Educational Codeforces Round 122 (Rated for Div. 2)
//                      B. Minority

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string str; cin >> str;
	int count0 = count(str.begin(), str.end(), '0');
	int count1 = count(str.begin(), str.end(), '1');
	if(count0 != count1){
		cout << min(count0, count1) << endl;
		return;
	}
	cout << count0 - 1 << endl;
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