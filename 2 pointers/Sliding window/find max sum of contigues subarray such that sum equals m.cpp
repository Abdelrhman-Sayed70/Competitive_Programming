#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// find max sum of contigues subarray such that sum<=m
	int n, m;
	cin >> n >> m;
	vector<int>v(n);
	for (auto& i : v) { cin >> i; }
	int ptr1 = 0, ptr2 = 0, sum = 0 , mx = -1;
	while (ptr1 < n) {
		while (ptr2 < n and sum + v[ptr2] <= m) {
			sum += v[ptr2];
			ptr2++;
		}
		mx = max(mx, sum);
		sum -= v[ptr1];
		ptr1++;
	}
	cout << mx << "\n";
}