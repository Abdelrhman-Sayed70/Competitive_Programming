#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool power_of_2() {
	ll n; cin >> n;
	// if (n & (n-1) and n!=0) == 0 : it is power of 2 
	return (n and !(n & (n - 1)));
}
int main() {
	int t = 10;
	while (1)
	cout << (power_of_2()?"YES\n":"NO\n");
}