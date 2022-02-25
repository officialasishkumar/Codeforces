/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/1609/problem/B

//  Deltix Round, Autumn 2021 (open for everyone, rated, Div. 1 + Div. 2)
//                         B. William the Vigilant

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
		int n, q; cin >> n >> q;
	string str; cin >> str;
	int ctr = 0;
	for (int i = 0; i < n - 2; i++) {
		if (str[i] == 'a' and str[i + 1] == 'b' and str[i + 2] == 'c') {
			ctr++;
		}
	}
	auto Is = [&](int x) {
		return (x >= 0 and x + 2 < n and str[x] == 'a' and str[x + 1] == 'b' and str[x + 2] == 'c');
	};
	string abc = "abc";
	while (q--) {
		int x; cin >> x;
		char c; cin >> c;
		x--;
		ctr -= Is(x - 2);
		ctr -= Is(x - 1);
		ctr -= Is(x);
		str[x] = c;
		ctr += Is(x - 2);
		ctr += Is(x - 1);
		ctr += Is(x);
		cout << ctr << endl;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t=1;
    // cin >> t;
    while(t--){
        solve();
    }
}