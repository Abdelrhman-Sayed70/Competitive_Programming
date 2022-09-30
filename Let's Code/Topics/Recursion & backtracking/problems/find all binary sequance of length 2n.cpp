#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
#define ll long long 

int n; 
void rec(string s) {
    if (s.size() == n) { cout << s << "\n" ; return; }
    rec(s + '0');
    rec(s + '1');
}
int main() { 
    cin >> n;
    rec("");
}