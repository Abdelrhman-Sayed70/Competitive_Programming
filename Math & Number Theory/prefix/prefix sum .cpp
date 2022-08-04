#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	int n; 
	cin >> n; 
	vector<ll>v(n) , prefix(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	prefix[0] = v[0];
	for (int i = 1; i < n; i++) {
		prefix[i] = v[i] + prefix[i - 1];
	}
	for (auto i : prefix) {
		cout << i << " ";
	}
}