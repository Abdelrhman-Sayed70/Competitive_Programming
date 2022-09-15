#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void add_and_traverse_asc() { 
	// map : auto sort asc and delete duplicates
	map<string, int>mp;
	mp["b"] = 20;
	mp["c"] = 20;
	mp["a"] = 22;
	for (auto it : mp) {
		cout << it.first << " " << it.second;
		cout << "\n";
	}
	// a b c 
}
void mp_iterator1() {
	// NOTE : we use dot only when use for(auto it : mp) else we use ->
	// have special behaviour ! 
	map<string, int>mp;
	mp["b"] = 20;
	mp["c"] = 20;
	mp["a"] = 22;
	map<string, int>::iterator it = mp.begin(); // use for loop and cant use auto
	for (it; it != mp.end(); it++) { 
		cout << it->first << " " << it->second << "\n"; // not it.first 
	}
}
void mp_iterator2() {
	// NOTE : we use dot only when use for(auto it : mp) else we use ->
	map<string, int>mp;
	mp["b"] = 20;
	mp["c"] = 20;
	mp["a"] = 22;
	// use auto (any data type)
	for (auto it : mp) {
		cout << it.first << " " << it.second << "\n"; // not it->first
	}
}
void traverse_dec() {
	map<char, int>mp;
	mp['A'] = 1;
	mp['B'] = 100;
	mp['D'] = 22;
	mp['C'] = 15;
	map<char, int>::reverse_iterator it = mp.rbegin();
	for (it; it != mp.rend(); it++) {
		cout << it->first << " " << it->second << "\n";
	}
	// D C B A 
}
void upper_lower() {
	map<char, int>mp;
	mp['a'] = 20;
	mp['b'] = 40;
	mp['c'] = 60;
	mp['d'] = 80;
	mp['e'] = 100;
	map<char, int>::iterator itlow, itup;
	itlow = mp.lower_bound('b');  // itlow points to b
	itup = mp.upper_bound('d');   // itup points to e	
	cout << itlow->first << " " << itup->first; 
}
void eraseRange() {
	map<char, int>mp;
	mp['a'] = 20;
	mp['b'] = 40;
	mp['c'] = 60;
	mp['d'] = 80;
	mp['e'] = 100;
	auto it1 = mp.find('a');
	auto it2 = mp.find('d');
	mp.erase(it1, it2); // erases [itlow,itup) erase a , b , c  
	for (auto it : mp) {
		cout << it.first << " " << it.second << "\n"; // not it->first
	}
}
void eraseOneElementHandledMissingElement() {
	map<char, int>mp;
	mp['a'] = 20;
	mp['b'] = 40;
	mp['c'] = 60;
	auto it = mp.find('a');
	if (it!=mp.end()) mp.erase(it); // or mp.erase('a') key 
	for (auto it : mp) {
		cout << it.first << " " << it.second << "\n"; // not it->first
	}
}
int main() {
	eraseOneElementHandledMissingElement();
}