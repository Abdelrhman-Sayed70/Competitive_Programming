#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);	
}
int main() {
	 /*
		gcd(A!, B!) = min(A!, B!)
		factorial of max(A,B) = min(A,B) * some numbers -> this means that max(A!,B!) is divisible by min(A!,B!)
		then gcd will equal to min(A!,B!) 
	 */
}