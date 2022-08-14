#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n; 
vector<int>v;
bool rec(int s, int e) {
	if (s > e) { return 1; }
	if (v[s] == v[e]) { return rec(s + 1, e - 1); }
	else { return 0; }
}
int main() {
	cin >> n; 
	for (int i = 0; i < n; i++) {
		int in; cin >> in; 
		v.push_back(in);
	}
	cout << (rec(0, n - 1) ? "YES" : "NO");
}