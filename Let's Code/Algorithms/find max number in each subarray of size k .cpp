#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// find the max number for each  subarray of size k 
	int n, k; 
	cin >> n >> k; 
	vector<int>v(n); 
	for (auto& i : v) { cin >> i; }
	multiset<int>st; 
	for (int i = 0; i < k; i++) {
		st.insert(v[i]);
	}
	cout << *(st.rbegin()) << " "; // max element in set 
	for (int i = k; i < n; i++) {
		st.insert(v[i]);
		st.erase(st.find(v[i-k]));
		cout << *(st.rbegin()) << " ";
	}
}