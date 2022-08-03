#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll gcd(ll a, ll b) {
    // recursive 
    // gcd(a,b) =gcd(b,a%b)
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int main() {
    int n; cin >> n;  
    int gc = 0;
    for (int i = 0; i < n ; i++) {
        int in; cin >> in;
        gc =  gcd(gc, in);
    }
    cout << gc; 
}