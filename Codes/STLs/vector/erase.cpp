#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
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
int main() {
	eraseRange();
}