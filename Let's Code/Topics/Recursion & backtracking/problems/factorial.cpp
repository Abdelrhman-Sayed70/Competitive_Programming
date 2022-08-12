#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll factorial(ll n) {
	if (n <= 1) { return 1; }
	return n * factorial(n - 1);
}
int main() {
  /*
	let's calculate fact of 4 

	fact(4) = 4 * fact(3)  
	fact(3) = 3 * fact(2)
	fact(2) = 2 * fact(1) 
	fact(1) = 1

		|
		|
		|
		V

	fact(2) = 2 * 1 = 2 
	fact(3) = 3 * 2 = 6
	fact(4) = 4 * 6 = 24

  */
}
