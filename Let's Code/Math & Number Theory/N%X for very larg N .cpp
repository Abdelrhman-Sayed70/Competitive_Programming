#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	string s; 
	ll x; 
	cin >> s >> x;
	ll res = 0;
	for (int i = 0; i < s.size(); i++) {
		res *= 10;
		res += s[i] - '0';
		res %= x;
	}
	cout << ((!res) ? "YES" : "NO");
}