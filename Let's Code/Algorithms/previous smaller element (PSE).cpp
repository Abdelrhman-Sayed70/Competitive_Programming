#include<bits/stdc++.h>
using namespace std;
#define ll long long 

vector<ll>PSE(vector<ll> v) {
	reverse(v.begin(), v.end());
	vector<ll>PSE(v.size(), -1);
	stack<ll>st;
	st.push(0);
	for (int i = 1; i < v.size(); i++) {
		if (v[i] >= v[st.top()]) { st.push(i); }
		else {
			while (st.size() and v[i] < v[st.top()]) {
				PSE[st.top()] = v.size()-1-i;
				st.pop();
			}
			st.push(i);
		}
	}
	reverse(PSE.begin(), PSE.end());
	return PSE;
}
int main() { 
	int n; cin >> n; 
	vector<ll>v(n),pse(n);
	for (auto& it : v) { cin >> it; } 
	pse = PSE(v);
	for (int i = 0; i < n; i++) {
		cout << pse[i] << "\n";
	}
}
