#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void set_insert_traverse_asc() {
	// auto sort & no dublicates 
	set<int>st;
	vector<int>v = { 2,2 ,1,1,3,3,0 };
	for (auto i : v) {
		st.insert(i);
	}
	set<int>::iterator it = st.begin();
	// or : auto it = st.begin();
	for (it; it != st.end(); it++) {
		cout << *it << " ";
	}
	// 0 1 2 3
}
void traverse() {
	set<int>st;
	vector<int>v = { 2,2 ,1,1,3,3,0 };
	for (auto i : v) {
		st.insert(i);
	}
	for (auto it : st) {
		cout << it << " ";  // 0 1 2 3
	}
}
void multiset_insert_traverse() {
	// auto sort & accept duplicates and same comp of set
	multiset<int>st;
	vector<int>v = { 2,2 ,1,1,3,3,0 };
	for (auto i : v) {
		st.insert(i);
	}
	set<int>::iterator it = st.begin();
	// or : auto it = st.begin();
	for (it; it != st.end(); it++) {
		cout << *it << " ";
	}
	// 0 1 1 2 2 3 3
}
void traverse_dec() {
	set<int>st;
	vector<int>v = { 2,2 ,1,1,3,3,0 };
	for (auto i : v) {
		st.insert(i);
	}
	set<int>::reverse_iterator it = st.rbegin();
	for (it; it != st.rend(); it++) {
		cout << *it << " ";
	}
	// 3 2 1 0
}
void erase() {
	set<int>st;
	vector<int>v = { 2,2 ,1,1,3,3,0 };
	for (auto i : v) {
		st.insert(i);
	}
	// st.erase(val) or st.erase(iterator)
	st.erase(1);
	set<int>::iterator it = st.begin();
	for (it; it != st.end(); it++) {
		cout << *it << " ";
	}
	// 0 2 3 
}
void find() {
	set<int>st;
	vector<int>v = { 2,2 ,1,1,3,3,0 };
	for (auto i : v) {
		st.insert(i);
	}
	cout << ((st.find(4) == st.end()) ? "Not found" : "Found");
}
void count() {
	set<int>st;
	vector<int>v = { 2,2 ,1,1,3,3,0 };
	for (auto i : v) {
		st.insert(i);
	}
	if (st.count(1)) cout << "YES";
	else cout << "NO";
}
void erase_range() {
	set<int>st;
	vector<int>v = { 0 ,1,2,3,4,5,6,7,8 };
	for (auto i : v) {
		st.insert(i);
	}
	// st.erase(it1,it2) // erase form it1 to it2-1
}
void lower_upper_bound() {
	set<int>st;
	vector<int>v = { 0 ,1,2,3,4,5,6,7,8 };
	for (auto& i : v) {
		st.insert(i);
	}
	// 0 1 2 3 
	set<int>::iterator low, up;
	low = st.lower_bound(1); // iterate over 1
	up = st.upper_bound(5);	 // iterate over 6
	st.erase(low, up); // 0 6 7 8
	for (auto it : st) {
		cout << it << " ";
	}
}
int main() {
	lower_upper_bound();
}