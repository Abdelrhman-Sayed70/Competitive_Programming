#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n, m;
int arr[10][10];
void traverseMatrix(int r ,int c) {
	// If the current column exceeds the total number of columns M, then the next row is started.
	// If the current row exceeds the total number of rows N, then the complete traversal is stopped.
	if (r >= n) { return; }
	if (c >= m) { cout << "\n"; traverseMatrix(r + 1, 0); }
	else {
		cout << arr[r][c] << " ";
		traverseMatrix(r, c + 1);
	}
}
int main() {
	cin >> n >> m;  
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	cout << "\n";
	traverseMatrix(0, 0);
}