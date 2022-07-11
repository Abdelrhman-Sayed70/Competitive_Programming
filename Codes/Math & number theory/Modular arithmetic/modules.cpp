#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll add(ll a, ll b, ll mod) {
	// (a + b) % mod
	ll ans = ((a % mod) + (b % mod)) % mod;
	return ans; 
}
ll multibly(ll a, ll b, ll mod) {
	// (a * b) % mod 
	ll ans = ((a % mod) * (b % mod)) % mod;
	return ans;
}
ll sub(ll a, ll b, ll mod) {
	ll ans = ((a % mod) - (b % mod)) % mod;
	return ans; 
}
long long modneg(long long k, long long n)
{
	return ((k % n) + n) % n;
}
int main() {
	 /* Modular arithmetic (n % mod) >> n is positive
	      if (n >= mod)
				23 % 6 = ? (23-?)%6 == 0 : the smallest number that we subtract from 23 to make it devisible by 6 = 5
				note the answer will be in range (0 : mod-1)

		 else if (n < mod)
				alwayes the answer will be n 

		 if ( mod==0 )
				math error	
	*/

	 /* Modular arithmetic (-n % mod) 
		 - first add mod to n until it became postive 
		 - then calculate the mod 				
	*/
	ll mod = 1e9 + 7;
	cout << modneg(-1, mod);
}