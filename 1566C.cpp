/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1566/problem/C

//                 Codeforces Global Round 16
//                       C. MAX-MEX Cut

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	string str1, str2; cin >> str1 >> str2;
	int ans = 0;
	for(int i{}; i<n; i++){
		if((str1[i]-'0') + (str2[i]-'0') == 1){
			ans+=2;
		} else if((str1[i]-'0') + (str2[i]-'0') == 2){
			if((str1[i+1]-'0') + (str2[i+1]-'0') == 0){
				ans+=2; i++;
			} 
		} else if((str1[i]-'0') + (str2[i]-'0') == 0){
			if((str1[i+1]-'0') + (str2[i+1]-'0') == 2){
				ans+=2; i++;
			} else {
				ans+=1;
			}
		}
	}
	cout << ans << endl;
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