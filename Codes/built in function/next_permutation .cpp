#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	vector<int>v = { 1,2,3 };
	sort(v.begin(), v.end());
	do {
		for (auto i : v) { cout << i << " "; } 
		cout << "\n";
	} while (next_permutation(v.begin(), v.end()));
}