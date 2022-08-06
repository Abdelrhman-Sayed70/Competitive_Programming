#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// problem 279B codeforces 
	// count max number of books you can read if you have m money and book i cost arr[i]
	// 2 pointer
	int n, m; 
	cin >> n >> m; 
	vector<int>v(n);
	for (auto& it : v) { cin >> it; }
	int cursum = 0, mx = 0, ptr1 = 0, ptr2 = 0;
	while (ptr1 < n) {
		while (ptr2 < n) {
			if (cursum + v[ptr2] > m) { break; }
			cursum += v[ptr2];
			ptr2++;
		}
		mx = max(mx, (ptr2 - ptr1));
		cursum -= v[ptr1];
		ptr1++;
	}
	cout << mx;
}