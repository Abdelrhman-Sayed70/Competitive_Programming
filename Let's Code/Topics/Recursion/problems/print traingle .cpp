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
void printTraingleSorted(int n) {
	if (n == 0) {
		return;
	}
	printTraingleSorted(n - 1);
	for (int i = 1; i <= n; i++) {
		cout << "* ";
	}
	cout << "\n";
}
int main() {
	int n;
	cin >> n;
	printTraingleSorted(n);
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