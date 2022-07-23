#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int n = 1000;
bool prime[n+5] ;
void seive() {
    for (int i = 0; i < n; i++) {
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j+=i) {
                prime[j] = false;
            }
        }
    }
}
int main() {
    // seive (backward thinking)
    // Time complexity : (n *log(log(n)))
    seive() ;
    for (int i = 0; i < n; i++) {
        if (prime[i]) {
            cout << i << ": prime\n";
        }
        else {
            cout << i << ": not prime\n";
        }
    }
}