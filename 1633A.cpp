/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1633/problem/A

/***********************************
 Explanation:
  The problem statement says to change the minimum number
  of digits in order to make the number i.e. n divisible by 7.
  If you take a look in the division table of 7, then you 
  can see that a number which is divisible by 7 is available
  in between every two consecutive numbers which are divisible by
  10. So we can replace the last digit of n by '0' and then run a 
  for loop from 0 to 9. we can start adding 1 to n until we reach 
  a number 'n' which is divisible by 7.

  Hint : you can replace the last digit by 0 by applying 
         modulo operation ;)

  Also there is a O(1) approach whose code is as follows:
***********************************/

// It is advised to implement the code on your own before 
//  checking my solution.

// ----------------------------------------------------------------
//    Educational Codeforces Round 122 (Rated for Div. 2)
//                       A. Div. 7

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	int val = (n/10)*10;
	if(n%7 != 0) cout << ceil(val/7.0)*7 << endl;
	else cout << n << endl;
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


// Thanks for reading :)
