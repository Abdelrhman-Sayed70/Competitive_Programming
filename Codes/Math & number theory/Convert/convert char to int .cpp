#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// convert char to int :  (ch - '0')
	string s = "123";
	ll sum = 0;
	for (auto it : s) {
		int num = it - '0';
		sum += num;
	}
	cout << sum;
}