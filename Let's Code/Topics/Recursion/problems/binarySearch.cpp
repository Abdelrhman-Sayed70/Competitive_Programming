#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int binarySearch(vector<int>v, int start, int end, int val) {
	if (start <= end) {
		int mid = (start + end) / 2;
		if (val < v[mid]) { return binarySearch(v, start, mid - 1, val); }
		else if (val > v[mid]) { return binarySearch(v, mid + 1, end, val); }
		else if (val == v[mid]) { return mid; }
	}
	return -1;
}
int main() {
	vector<int>v = { 1,2,3,4,5 };
	int val; cin >> val;
	cout << binarySearch(v, 0, 4, val);
}