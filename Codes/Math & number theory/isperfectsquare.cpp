#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isperfectsqaur(ll n) {
	ll tmp = sqrt(n);
	return((tmp * tmp) == n);
}
int main() {
	int t = 10; 
	while (t--) {
		ll n; 
		cin >> n; 
		cout << isperfectsqaur(n) << "\n";
	}
}