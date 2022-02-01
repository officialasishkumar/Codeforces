/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/problemset/problem/1607/C

//                 Codeforces Round #753 (Div. 3)
//                     C. Minimum Extraction


#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	vector <int> vec(n), vec1;
	for(int i = 0; i < n; i++) cin >> vec[i];
	sort(vec.rbegin(), vec.rend());
	if(n==1){
		cout << vec[0] <<endl;
		return;
	}
	vec1.push_back(*min_element(vec.begin(), vec.end())); 
	for(int i = 0; i < n-1; i++){
		vec1.push_back(vec[i] - vec[i+1]);
	}
	cout << *max_element(vec1.begin(), vec1.end()) << endl;

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