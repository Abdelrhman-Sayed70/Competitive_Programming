#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	int n ,x,cnt= 0 ; 
	cin >> n >> x; 
	vector<int>v(n);
	for (auto& i : v) { cin >> i; }
	sort(v.begin(), v.end());
	int start = 0, end = n - 1;
	while (start < end) {
		if (v[start] + v[end] > x) { end--; }
		else if (v[start] + v[end] < x) { start++; }
		else { cnt++; end--; }
	}
	cout << cnt; 
}