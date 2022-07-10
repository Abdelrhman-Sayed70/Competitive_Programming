#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	int n= 12345; 
	cout << n / 10 << "\n"; // 1234 : remove last digit 
	cout << n / 100 << "\n"; // 123 : remove last 2 digits
	cout << n / 10.0 << "\n";//1234.5
}