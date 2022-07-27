#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// How to find whether an array can be divided into two equal-sum parts
	/*	
		One check is simple. If sum of all the elements of the array is odd then it cannot be divided in two parts with equal sum.

		But, when the total sum of array is even (say, totalSum), then we have to check if we can find a subset of array with sum= totalSum/2. This is the challenging part. So our problem reduces to:

		Find the subset of array with sum = totalSum/2
	*/

	int n; cin >> n;
	vector<int>v(n);
	int sum = 0;
	for (auto& i : v) { cin >> i; sum += i; }
}