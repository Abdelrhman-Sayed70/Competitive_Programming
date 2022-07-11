#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	// show how many number of times 5 appere in a range : 
	int n; 
	cin >> n; 
	vector<ll>v(n) , prefix(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	prefix[0] = (v[0] == 5);
	for (int i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1] + (v[i] == 5);
	}
	int a, b;
	cin >> a >> b;
	if (a == 0) cout << prefix[b];
	else cout << prefix[b] - prefix[a - 1];
	cout << "\n";
}