#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long
 
int main() {
	// auto sort & no dublicates 
	set<int>st; 
	vector<int>v = { 2,2 ,1,1,3,3,0 };
	for (auto i : v) {
		st.insert(i);
	}
	set<int>::iterator it = st.begin();
	for (it; it != st.end(); it++) {
		cout << *it << " ";
	}
	// 0 1 2 3 
}