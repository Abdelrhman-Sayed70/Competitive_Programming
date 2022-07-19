#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 

int main() {
	// remove duplicates in O(n) ;
	int n; cin >> n; 
	vector<ll>v(n) ;
	for (auto& i : v) { cin >> i; }
	sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()), v.end()); 
	/*
		or : 
		n = unique(v.begin(), v.end()) - v.begin();
		v.resize(n);
	*/

	for (auto i : v) { cout << i << " "; }
}