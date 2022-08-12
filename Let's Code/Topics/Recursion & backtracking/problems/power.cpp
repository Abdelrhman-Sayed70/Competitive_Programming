#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll powerfunction(ll value, int power) {
	// pow(7,3) = 7 * 7 * 7 = 343
	if (power == 0) { return 1; }
	return value * powerfunction(value, power - 1);
}
int main() {
	cout << powerfunction(7, 3);
}