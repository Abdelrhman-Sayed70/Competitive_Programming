#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void passing_value(vector<int>v) {
	v.push_back(1);
	v.push_back(2);
}
void passing_reference(vector<int>&v) {
	v.push_back(1);
	v.push_back(2);
}
int main() {
	vector<int>v;
	passing_value(v); 
	cout << "passing value size : " << v.size() << "\n";
	passing_reference(v);
	cout << "passing ref size " << v.size();
}