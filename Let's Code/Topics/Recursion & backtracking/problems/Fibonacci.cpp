#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll fib(int n) {
	if (n == 1 or n == 0) { return n ;}
	return fib(n - 1) + fib(n - 2);
}
int main() {
	for (int i = 0; i < 10; i++) {
		cout << fib(i) << "\n";
	}
}