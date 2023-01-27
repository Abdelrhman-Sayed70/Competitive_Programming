#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void get_first_and_last_occ_of_each_number_not_sorted() {
	int n; cin >> n;
	vector<int>v(n);
	for (auto& it : v) { cin >> it; } 
	map<int, pair<int, int>>mp;
	map<int, bool>vis; 
	for (int i = 0; i < n; i++) {
		if (!vis[v[i]]) { mp[v[i]].first = mp[v[i]].second = i + 1; vis[v[i]] = 1; }
		else if (vis[v[i]]) { mp[v[i]].second = i + 1; }
	}
	for (auto it : mp) {
		cout << it.first << " : " << it.second.first << " " << it.second.second << "\n";
	}
}
int main() {
	
}