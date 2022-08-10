#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int a;
    cin >> a;
    cout << ((a & 1) ? "odd" : "even");
    /*
        even number has 0 at the most right bit (...0)
        odd number has  1 at the most right bit (...1)
    */
}