/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/problemset/problem/1605/B

//                 Codeforces Round #754 (Div. 2)
//                          B. Reverse Sort


#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	string str; cin >> str;
	vector <int> vec;
	if(is_sorted(str.begin(), str.end())){
		cout << 0 << endl;
		return;
	}	
	cout << 1 << endl;
	int count1 = count(str.begin(), str.end(), '1');
	int count0 = count(str.begin(), str.end(), '0');
	for(int i{}; i<count0; i++){
		if(str[i] == '1'){
			vec.push_back(i+1);
		}
	}
	for(int i{count0}; i<n; i++){
		if(str[i] == '0'){
			vec.push_back(i+1);
		}
	}
	cout << vec.size() << ' ';
	for(auto v : vec){
		cout << v << ' ';
	}
	cout <<endl;
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