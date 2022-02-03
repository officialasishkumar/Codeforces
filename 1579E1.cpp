/*
Author : Asish Kumar
*/
// Problem link : https://codeforces.com/problemset/problem/1579/E1

//                  Codeforces Round #744 (Div. 3)
//             E1. Permutation Minimization by Deque


#include <bits/stdc++.h>
#define ll long long
using namespace std;
char Substring(string s)
{
 
    int ans = 1, temp = 1;
	char ch = s[0];
    // Traverse the string
    for (int i = 1; i < s.size(); i++) {
        // If character is same as
        // previous increment temp value
        if (s[i] == s[i - 1]) {
            ++temp;
        }
        else {
            ans = max(ans, temp);
			if(ans == temp){
				ch = s[i - 1];
			}
            temp = 1;
        }
    }
    ans = max(ans, temp);
	if(ans == temp){
		ch = s.back();
	}
 
    // Return the required answer
    return ch;
}
int SubstringLen(string s)
{
 
    int ans = 1, temp = 1;
 
    // Traverse the string
    for (int i = 1; i < s.size(); i++) {
        // If character is same as
        // previous increment temp value
        if (s[i] == s[i - 1]) {
            ++temp;
        }
        else {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
 
    // Return the required answer
    return ans;
}
void solve() {
	int n; cin >> n;
	vector <int> vec(n);
	for (int i = 0; i < n; ++i) cin >> vec[i];
	reverse(vec.begin(), vec.end());
	int x =  vec.back();
	vec.pop_back();
	deque<int> d;
	d.push_back(x);
	n = vec.size();
	for(int i = n-1; i >= 0; --i) {
		if(vec[i]<x){
			x=vec[i];
			d.push_front(vec[i]);
			vec.pop_back();
		}
		else {
			d.push_back(vec[i]);
		}
	}
	for(auto val : d){
		cout << val << " ";
	}
	cout << endl;

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