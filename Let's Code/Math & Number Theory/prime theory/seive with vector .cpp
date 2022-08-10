#include<bits/stdc++.h>
using namespace std;
#define ll long long 

const int N = 1e3; 
vector<bool>isprime(N+5, true);
void seive() {
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (isprime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isprime[j] = false;
            }
        }
    }
}
int main() {
    seive(); 
}