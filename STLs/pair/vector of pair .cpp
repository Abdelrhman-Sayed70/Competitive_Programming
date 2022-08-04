#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main() {
	vector<pair<int, int>>pr(5);
	for (int i = 0; i < 2 ; i++) {
		cin >> pr[i].first >> pr[i].second;
	}
	for (int i = 0; i < 2; i++) {
		cout << pr[i].first << " " <<  pr[i].second << "\n";
	}
}