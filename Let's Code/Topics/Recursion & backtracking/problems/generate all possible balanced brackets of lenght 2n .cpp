#include<bits/stdc++.h>
using namespace std;
#define ll long long  

int n;
void solve(string s, int l, int r) {
    if (!l and !r) { cout << s << "\n"; return; }
    if (l > 0) { solve(s + '(', l - 1, r); }
    if (r > l) { solve(s + ')', l, r - 1); }
    /*
        ok bracket has n open and n close 
        so if the opened is less than n i can add open 
        if the closed became greater than opened i should add close 
    */
}
int main() {
	cin >> n;
	solve("", n, n);
}