#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void coordinate_compression() {
	// v = {300  10000  -5  -100  300} 
	// sort array, remove duplicated and then assign each unique value to number
	// start = 0 , step = 1  ==>  v = {2 3 1 0 2} 
	// start = 2 , step = 2  ==>  v = {6 8 4 2 6}  (prefered)
	vector<int>v = { 300,1000,-5,-100,300 };
	// v = {-100 -5 300 1000}
	cout << "Before compress : \n";
	for (auto it : v) { cout << it << " "; }
	cout << "\n";
	set<int>st(v.begin(), v.end());
	map<int, int>mp; 
	int start = 2, step = 2, index = 0;
	for(auto it : st) {
		mp[it] = start + step * index, index++;
	}
	for (auto& it : v) { it = mp[it]; }
	cout << "after compress : \n";
	for (auto it : v) { cout << it << " "; }
}
void coordinate_compression_efficeint() {
	vector<int>v = { 300,1000,-5,-100,300 };
	// after compress : v = {6 8 4 2 6}
	vector<int>indexTovalue;// index that you generate what is the old value of this index. i.e()
	map<int, int>valueToindex; // the new index of the old value. i.e()
}
int main() {
	 
}