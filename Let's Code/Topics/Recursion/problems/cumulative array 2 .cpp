#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n; 
void solve(vector<int>&v, int len) {
	if (len == n) { return; }
	v[len] += v[len - 1];
	solve(v, len + 1);
}
int main() {
    cin >> n;
	vector<int>v(n);
	for (auto& i : v) { cin >> i; }
	solve(v,1);
	for (auto i : v) { cout << i << " "; }
}