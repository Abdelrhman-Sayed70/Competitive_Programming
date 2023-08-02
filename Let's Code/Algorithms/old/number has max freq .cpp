#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void max_number_has_max_freq1() {
	int n; cin >> n;
	map<int, int>mp;
	while (n--) { int in; cin >> in; mp[in]++; }
	int mx = -1, num = 0;
	for (auto it : mp) {
		if (it.second >= mx) { mx = it.second; num = it.first; }
	}
	cout << num;
}
void max_number_has_max_freq2() {
	int n; cin >> n;
	map<int, int>mp;
	set<pair<int, int>>st;
	while (n--) { int in; cin >> in; mp[in]++; }
	for (auto it : mp) {
		st.insert({ it.second,it.first });
	}
	for (auto it : st) { cout << it.first << " " << it.second << "\n"; }
	//cout << prev(st.end())->second;
}
void max_number_has_max_freq_in_each_range() {

}
int main() {
	max_number_has_max_freq2();
}