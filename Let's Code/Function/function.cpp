#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int add(int a, int b) {
	return a + b;
}
int sum = 0;
void do_it() {
	// sum till you find neg number 
	int n; cin >> n; 
	int arr[10];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) { return; } // return used to terminate function
		sum += arr[i];
	}
}
int main() {
	cout << add(2, 3);
}