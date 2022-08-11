#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int maxarray(vector<int>v ,int len) {
	if (len == 0) { return v[0]; }
	return max(v[len - 1], maxarray(v, len - 1));
}
int main() {
	int n; cin >> n;  
	vector<int>v; 
	for (int i = 0; i < n; i++) {
		int in; cin >> in; 
		v.push_back(in);
	}
	cout << maxarray(v, v.size());
}