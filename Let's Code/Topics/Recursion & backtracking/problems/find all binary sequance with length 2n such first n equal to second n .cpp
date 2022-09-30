#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int n;  
void rec(string s , int sum1 , int sum2) {
	if (s.size()==2*n) {
		if (sum1==sum2) cout << s << "\n"; return;
	}
	rec(s + '0',sum1,sum2);
	if (s.size() < n) {
		rec(s + '1',sum1+1,sum2);
	}
	else {
		rec(s + '1',sum1,sum2+1);
	}
}
int main() {
	cin >> n;
	rec("",0,0);
}