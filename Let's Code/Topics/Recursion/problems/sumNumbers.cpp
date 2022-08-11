#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solve(vector<int>v, int len) {
	if (len == 0) { return v[0]; }
	return v[len] + solve(v, len - 1);
}
int main() {
	int n; cin >> n;
	vector<int>v;
	while (n--) {
		int in; cin >> in; 
		v.push_back(in);
	}
	cout << solve(v, v.size()-1);
}