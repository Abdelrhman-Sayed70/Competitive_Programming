#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
void front_back() {
	vector<int>v = { 1,2,3 };
	cout << v.front() << " " << v.back() << "\n"; // 1 3  
	// but v.begin() : contain the adress of the first element(index 0) in the vector  
	//     v.end()	 : contain the adress of the (index = v.size()) in the vector  
}
void clear_empty() {
	vector<int>v = { 1,2,3 };
	cout << v.empty() << "\n"; // return if the vector is empty or not ? 
	v.clear(); // clear the vector
	cout << v.size() << "\n";
}
void initialize_vector() {
	vector<int>v(5, 1); // size , initilize value
	for (auto it : v) {
		cout << it << " ";
	}
	// 1 1 1 1 1
}
void push_pop() {
	vector<int>v;
	int n; cin >> n;  
	for (int i = 0; i < n; i++) {
		int in; cin >> in; 
		v.push_back(in);
	}
	while (!v.empty()) {
		v.pop_back();
	}
	cout << v.size();
}
void eraseOneElement() {
	// V.erase(address)

	vector<int>V = { 1,2,3,4,5 };
	V.erase(V.begin() + 1);
	for (auto it : V) {
		cout << it << " ";
	}
	// 1 3 4 5
}
void eraseRange() {
	// V.erase(starting_address , end_address + 1)

	vector<int>V = { 1,2,3,4,5 };
	V.erase(V.begin() + 0, V.begin() + 4); // remove from index 0 to index 3 
	for (auto it : V) {
		cout << it << " ";
	}
	// 5
}
void remove_dublicates() {
	// remove duplicates in O(n) ;
	int n; cin >> n;
	vector<ll>v(n);
	for (auto& i : v) { cin >> i; }
	sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()), v.end());
	/*
		or :
		n = unique(v.begin(), v.end()) - v.begin();
		v.resize(n);
	*/

	for (auto i : v) { cout << i << " "; }
}
vector<ll> subvector(vector<ll> v, int m, int n) {
	// m : first index  ,  n : last index
	auto first = v.begin() + m;
	auto last = v.begin() + n + 1;
	vector<ll> vector(first, last);
	return vector;
	/*
		vector<ll>v = { 1,2,3,4,5 };
		vector<ll>s = subvector(v, 1, 3);
		for (auto i : s) { cout << i << " "; } // 2 3 4
	*/
}
int main() {

		
}