#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int rangeGCD(int n, int m)
{
    return (n == m) ? n : 1;
}
int main() {
    int n = 475;
    int m = 475;
    cout << rangeGCD(n, m);
    return 0;
}