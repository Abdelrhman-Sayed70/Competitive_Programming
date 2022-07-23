#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// array initialized with zeroes for each query add val to each element in range 		
	int n; 
	cin >> n; 
	vector<int>V(n + 1 ,0);
	int q; 
	cin >> q; 
	while (q--) {
		int l, r , val ; 
		cin >> l >> r >> val ;
		l--, r--; // for zero index 
		V[l] += val;
		V[r + 1] -= val;
	}
	for (int i = 1; i < n; i++) {
		V[i] += V[i - 1];
	}
	for (int i = 0; i < n; i++) {
		cout << V[i] << " ";
	}
}