#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main() {
	int  n; 
	cin >> n; 
	vector<pair<int, int>> pr(n); 
	for (int i = 0; i < n; i++) {
		cin >> pr[i].first >> pr[i].second; 
	}
	sort(pr.begin(), pr.end()); // sort asc based on first item on pair 
	for (auto it : pr) {
		cout << it.first << " " << it.second << "\n";
	}
}