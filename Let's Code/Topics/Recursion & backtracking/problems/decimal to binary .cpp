#include<bits/stdc++.h>
using namespace std;
#define ll long long

void rec(int n,string &s) {
	if (n <= 1) { s.push_back((n&1)+'0'); return; }
	rec((n >> 1),s);
	s.push_back((n&1)+'0');
}
string decimaltobinary(int n) {
	string ans;
	rec(n,ans);
	return ans;
}
int main() {
	int n; cin >> n; 
	cout << decimaltobinary(n);
}