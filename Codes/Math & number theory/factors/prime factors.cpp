#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    // Prime factorizatoin  
    // All numbers can be represented as multibly of prime numbers.
    int n; cin >> n; 
    int tmp = n;
    for (int i = 2; i*i <= (tmp); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
                cout << i << " "; 
            }
        }
    }
    if (n!=1) {
        cout << n << " " ;
    }
} 