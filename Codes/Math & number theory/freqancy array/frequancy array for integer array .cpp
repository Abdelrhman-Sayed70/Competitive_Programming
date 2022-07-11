#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	int freq[10] = {0};
	vector<int>v = { 1,2,1,3,4,6,6,0 };
	int mxnum = -1;
	for (int i = 0; i < v.size(); i++) {
		freq[v[i]]++;
	}
}