/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/contest/432/problem/B

//                Codeforces Round #246 (Div. 2)
//                        B. Football Kit

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	 int n; cin >> n;
   vector <pair<int, int>> vec(n);
   map<int,int> first, second;
   for(int i = 0; i<n; i++){
       cin >> vec[i].first >> vec[i].second;
       first[vec[i].first]++;
       second[vec[i].second]++;
   }
    int ans = 0;
    for(int i = 0; i<n; ++i){
        int k1 = n-1+first[vec[i].second];
        int k2 = n-1-first[vec[i].second];
        cout << k1 << ' ' << k2 << endl;
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
// 	cin >> t;
	while (t--) {
		solve();
	}
}
