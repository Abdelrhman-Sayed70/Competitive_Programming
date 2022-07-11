#include<bits/stdc++.h>
using namespace std;
#define ll long long

string decimal_to_binary(int n) {
	string s;
	if (n == 0) { s = "0"; return s; }
	while (n) {
		if (n % 2) s += '1';
		else s += '0';
		n /= 2;
	}
	reverse(s.begin(), s.end());
	return s;
}
int main() {
	int n;
	cin >> n;
	cout << decimal_to_binary(n);
}