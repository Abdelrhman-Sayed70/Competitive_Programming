#include<bits/stdc++.h>
using namespace std;
#define ll long long

void decimal_to_binary(int n) {
	if (n == 0) { cout << 0; return; }
	vector<int>v;
	while (n) {
		v.push_back(n % 2);
		n /= 2;
	}
	reverse(v.begin(),v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}
}
int main() {
	int n; 
	cin >> n; 
	decimal_to_binary(n);
}