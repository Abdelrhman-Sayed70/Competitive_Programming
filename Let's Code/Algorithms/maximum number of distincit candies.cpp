#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	/*
	maximum number of distincit candies
	5				9				2

	2				3				1
	2 3				3 5 1			2

	*/
	int n;
	cin >> n;
	int val = 1;
	vector<int>v;
	while (n) {
		if (n - val > val) { n -= val; v.push_back(val); val++; }
		else { v.push_back(n); n = 0; }
	}
	cout << v.size() << "\n";
	for (auto i : v) { cout << i << " "; }
	
}