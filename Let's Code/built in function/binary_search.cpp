#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	vector<int>v = { 1,1,3 };
	if (binary_search(v.begin(), v.end(), 3)) { cout << "YES"; }
	else cout << "NO";
}