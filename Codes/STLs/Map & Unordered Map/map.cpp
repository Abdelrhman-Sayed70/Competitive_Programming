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
int main() {
	map_add_traverse();
}