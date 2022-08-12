#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int solve(vector<int>v, int len, int cnt) {
	if (cnt == 0) { return 0; }	
	return v[len] + solve(v, len - 1, cnt - 1);
}
int main() {
	int n ,cnt; 
    cin >> n >> cnt;
	vector<int>v(n);
	for (auto& i : v) { cin >> i; }
	cout << solve(v, n - 1, cnt);
}