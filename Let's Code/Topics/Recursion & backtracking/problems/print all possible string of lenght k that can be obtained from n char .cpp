#include<bits/stdc++.h>
using namespace std;
#define ll long long  

vector<char>v;
int k;
void rec(string s) {
	if (s.size() == k) { cout << s << "\n"; return; }
	for (auto it : v) { rec(s + it); }
}
int main() {
	cin >> k; 
	v = { 'a','b' };
	rec("");
}