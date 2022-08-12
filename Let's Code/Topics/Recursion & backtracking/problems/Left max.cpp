#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n , mx =-1 ; 
void solve(vector<int>&v, int len) {
	if (len == n) { return; }
	mx = max(mx, v[len]);
	v[len] = mx; 
	solve(v, len + 1);
}
int main() {
    cin >> n;
	vector<int>v(n),ans(n);
	for (auto& i : v) { cin >> i; }
	solve(v,0);
	for (auto i : v) { cout << i << " "; }
}