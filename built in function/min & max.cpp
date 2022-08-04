#include<bits/stdc++.h>
using namespace std;
#define ll long long

void minmax1() {
	cout << min(3, 4) << "\n";
	cout << min({ 1,2,3,4,5,6 }) << "\n";
	cout << max(1, 2) << "\n";
	cout << max({ 1,2,3,4,5 });
}
void minmax2() {
	vector<int>v = { 1,2,0 };
	cout << *min_element(v.begin(), v.end()) << "\n" ;
	cout << *max_element(v.begin(), v.end());
}
int main() {
	minmax2();
}