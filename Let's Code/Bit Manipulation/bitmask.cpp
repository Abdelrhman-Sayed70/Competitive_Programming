#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int getbit(int n, int idx) {
	return((n>>idx)&1);
}
void bitmask() {
	// complexity : 2 power n  
	// max n = 25 
	int n; cin >> n; 
	vector<int>v(n); 
	for (auto& it : v) { cin >> it; }
	for (int i = 1; i < (1<<n); i++) {
		// i in binary : 
		// 001
		// 010
		// 011 
		// 100
		// 101
		// 110
		// 111
		for (int j = 0; j < n; j++) {
			if (getbit(i, j)) { cout << v[j] << " "; }
		}
		cout << endl;
	}
}
void bitmaskXOR() {
	// given an array print all subsequance such that the xor of all elements in it is 0 
	int n; cin >> n;
	vector<int>v(n);
	for (auto& it : v) { cin >> it; }
	for (int i = 1; i < (1 << n); i++) {
		int _xor = 0;
		vector<int>vec;
		for (int j = 0; j < n; j++) {
			if (getbit(i, j)) { _xor^= v[j]; vec.push_back(v[j]); }
		}
		if (_xor == 0) {
			for (auto it : vec) { cout << it << " "; }
			cout << endl;
		}
	}
}
void bitmaskXOROptimized() {
	// given an array print all subsequance such that the xor of all elements in it is 0 
	// n up to 40 
	// Meet in the meddile 
	int n; cin >> n; 
	vector<int>v(n); 
	for (auto& it : v) { cin >> it; } 
	int left = n / 2; 
	int right = n - left;
	ll ans = 0;
	map<ll, int>mp;
	// bitmask on right  
	for (int i = 0; i < (1 << right); i++) {
		int _xor = 0; 
		for (int j = 0; j < right; j++) {
			if (getbit(i,j)) _xor ^= v[j]+left;
		}
		mp[_xor]++;
	}
	for (int i = 0; i < (1 << left); i++) {
		int _xor = 0; 
		for (int j = 0; j < n; j++) {
			if (getbit(i, j)) _xor ^= v[j];
		}
		ans += mp[_xor];
	}
	cout << ans - 1;
}
int main() {  
	bitmaskXOROptimized();
}