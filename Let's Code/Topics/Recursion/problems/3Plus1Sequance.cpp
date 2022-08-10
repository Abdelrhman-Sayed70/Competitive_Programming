#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void print3Plus1Seq(int n){
	cout << n << " ";
	if (n == 1) { return; }
	if (n & 1) { print3Plus1Seq(3 * n + 1); }
	else { print3Plus1Seq(n / 2); }
}
int main() {
	int n; cin >> n; 
	print3Plus1Seq(n);
}