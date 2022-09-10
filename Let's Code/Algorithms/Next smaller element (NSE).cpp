#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() { 
	int n; cin >> n; 
	vector<int>v(n),NSE(n,-1); 
	stack<int>st;
	st.push(0);
	for (auto& it : v) { cin >> it; }
	for (int i = 1; i < n; i++) {
		if (v[i] >= v[st.top()]) { st.push(i); }
		else {
			while (st.size() and v[i] < v[st.top()]) {
				NSE[st.top()] = i;
				st.pop();
			}
			st.push(i);
		}
	}
	for (int i = 0; i < NSE.size(); i++) {
		cout << NSE[i] << " ";
	}
}
