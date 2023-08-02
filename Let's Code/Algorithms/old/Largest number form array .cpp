#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	int n; cin >> n;  
	vector<int>v(n); 
	for (auto& it : v) { cin >> it; } 
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			string a = to_string(v[i]); 
			string b = to_string(v[j]);
			string ab = a + b, ba = b + a;
			if (ba > ab) { swap(v[i], v[j]); }
		}
	}
	string ans; 
	for (auto it : v) { string t = to_string(it); ans += t; }
	// to avoid 0000....
	reverse(ans.begin(),ans.end());
	while (true) {
		if (ans.size() >= 2) {
			if (ans.back() == '0') { ans.pop_back(); }
			else { break; }
		}
		else {
			break;
		}
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
}