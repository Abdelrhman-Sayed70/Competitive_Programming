#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    // Prime factorizatoin  
    // All numbers can be represented as multibly of prime numbers.
    int n; cin >> n; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
                cout << i << " "; 
            }
        }
    }
    if (n) {
        cout << n << " " ;
    }
} 