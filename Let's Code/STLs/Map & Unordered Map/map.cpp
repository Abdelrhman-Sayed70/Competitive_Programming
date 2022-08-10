#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void map_add_traverse() {
	map<string, int>mp;
	mp["gaber"] = 20;
	mp["Ahmed"] = 20;
	mp["aya"] = 22;
	for (auto it : mp) {
		cout << it.first << " " << it.second;
		cout << "\n";
	}
}
void upper_lower() {
	map<char, int>mymap;
	mymap['a'] = 20;
	mymap['b'] = 40;
	mymap['c'] = 60;
	mymap['d'] = 80;
	mymap['e'] = 100;
	map<char, int>::iterator itlow, itup;
	itlow = mymap.lower_bound('b');  // itlow points to b
	itup = mymap.upper_bound('d');   // itup points to e (not d!)
	mymap.erase(itlow, itup);	     // erases [itlow,itup)
	for (auto it : mymap) {
		cout << it.first << " " << it.second;
		cout << "\n";
	}
}
int main() {
	upper_lower();
}