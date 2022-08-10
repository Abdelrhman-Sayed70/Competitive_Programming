#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void printTrainglereversed(int n) {
	if (n == 0) {
		return;
	}
	for (int i = 1; i <= n; i++) {
		cout << "* ";
	}
	cout << "\n";
	printTrainglereversed(n - 1);
}
int n;
void printTraingleSorted(int sz) {
	if (sz > n) { return; }
	for (int i = 1; i <= sz; i++) {
		cout << "* ";
	}
	cout << "\n";
	printTraingleSorted(sz + 1);
}
int main() {
	cin >> n; 
	printTraingleSorted(1);
}



/* Reversed
   5
   * * * * *
   * * * *
   * * *
   * *
   *
*/
/* Sorted
   5
   *
   * *
   * * *
   * * * *
   * * * * *
*/