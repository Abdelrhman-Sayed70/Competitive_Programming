#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void set_insert_traverse_asc_clear() {
	// auto sort & no dublicates 
	set<int>st;
	vector<int>v = { 2,2 ,1,1,3,3,0 };
	for (auto i : v) {
		st.insert(i);
	}
	// or set<int>st(v.begin(),v.end) 
	set<int>::iterator it = st.begin();
	// or : auto it = st.begin();
	for (it; it != st.end(); it++) {
		cout << *it << " ";
	}
	// 0 1 2 3
	st.clear(); // now st is empty 
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
void find() {
	// st.find(val) -> return iterator to the first elemenet equal to val and if there is no element it will return st.end
	set<int>st;
	vector<int>v = { 2,2 ,1,1,3,3,0 };
	for (auto i : v) {
		st.insert(i);
	}
	cout << ((st.find(4) == st.end()) ? "Not found" : "Found");
}
void count() {
	// count(val) return 1 if it contains this value
	set<int>st;
	vector<int>v = { 2,2 ,1,1,3,3,0 };
	for (auto i : v) {
		st.insert(i);
	}
	if (st.count(1)) cout << "YES";
	else cout << "NO";
}
void erase1() {
	// st.erase(iterator) -> erase only the element at this iterator (how to find this iterator ? by find function)
	// st.erase(value) -> erase all elements has this value (in case of multiset) 
	vector<int>v = { 1,1,2,2,3,3,3,4 };
	multiset<int>ms;
	for (auto it : v) { ms.insert(it); }
	ms.erase(1); // erase all ones
	for (auto it : ms) { cout << it << " "; } // 2 2 3 3 3 4
	cout << "\n";
}
void erase2() {
	// st.erase(iterator) -> erase only the element at this iterator (how to find this iterator ? by find function)
	// st.erase(value) -> erase all elements has this value (in case of multiset) 
	vector<int>v = { 1,1,2,2,3,3,3,4 };
	multiset<int>ms;
	for (auto it : v) { ms.insert(it); }
	ms.erase(ms.find(2)); // erase the first 2
	for (auto it : ms) { cout << it << " "; } // 2 2 3 3 3 4
	cout << "\n";
}
void erase_while_iterating() {
	// it is hard way and may take run time error so store values you want to erase in vector and erase them after set iteration loop 
	vector<int>v = { 1,1,2,2,3,3,3,4 };
	multiset<int>ms;
	for (auto it : v) { ms.insert(it); }
	vector<int>vec;
	for (auto it : ms) {
		if (it & 1) { vec.push_back(it); } 
	}
	for (auto it : vec) { ms.erase(it); }
	for (auto it : ms) { cout << it << " "; }
	cout << "\n";
}
void erase_range() {
	set<int>st;
	vector<int>v = { 0 ,1,2,3,4,5,6,7,8 };
	for (auto i : v) {
		st.insert(i);
	}
	auto it1 = st.find(1), it2 = st.find(5);
	st.erase(it1, it2); // erase form it1 to it2-1
	for (auto it : st) { cout << it << " "; } //0 5 6 7 8
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
void prev_next() {
	// prev(iterator) -> return the prevouis iterator 
	// next(iterator)
	set<int>st;
	vector<int>v = { 0 ,1,2,3,4,5,6,7,8 };
	for (auto i : v) {
		st.insert(i);
	}
	cout << *prev(st.end()) << "\n";
	cout << *next(st.begin());
}
void update_set() {
	set<pair<int, int>>st;
	// if you want to update one pair of the pairs inside, delete this pair and create your new pair then insert it again
	int a = 0, b = 0; 
	st.insert({ a,b });
	
	st.erase({ a,b });
	a++;
	st.insert({ a,b });

}
void feature1() {
	set<pair<int, int>>st; // will sort according to first element in pair and the second element will be sorted
}
int main() {
	prev_next();
}