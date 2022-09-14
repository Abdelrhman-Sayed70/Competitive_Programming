#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void advance() {
	vector<int>v = { 1,2,3,4,5 };
	auto it = v.begin();
	advance(it, 1); // increment it by value : it now iterate on index 1 
	cout << *it << "\n";
	vector<int>::iterator itt = v.begin();
	for (itt; itt != v.end(); advance(itt, 1)) {
		cout << *itt << " ";
	}
}
void distance() {
	// O(n)
	vector<int>v = { 1,2,3,4,5 };
	vector<int>::iterator it = v.begin(); // 0 
	vector<int>::iterator it2 = v.end()-1; // 4
		       //min,max
	cout << distance(it, it2); // 4-0
}
int main() {
	
}
