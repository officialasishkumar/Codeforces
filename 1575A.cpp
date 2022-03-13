/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1575/problem/A

//  COMPFEST 13 - Finals Online Mirror (Unrated, ICPC Rules, Teams Preferred)
//                        A. Another Sorting Problem

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector <pair<string, int>> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i].first;
		vec[i].second = i;
	}
	for (int i = 0; i < n; i++)
		for (int j = 1; j < m; j += 2)
			vec[i].first[j] = 'Z' - vec[i].first[j];
	sort(vec.begin(), vec.end());
	for (auto v : vec) {
		cout << v.second + 1 << ' ' ;
	}
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--)
        solve();
}