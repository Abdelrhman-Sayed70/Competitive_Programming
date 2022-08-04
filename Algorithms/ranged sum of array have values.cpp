#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> V(n), partialsum(n + 1, 0);
    for (int i = 0; i < n; i++) { cin >> V[i]; }
    while (q--) {
        ll a, b, c;
        cin >> a >> b >> c;
        a--;
        partialsum[a] += c; partialsum[b] -= c;
    }
    V[0] += partialsum[0];
    for (int i = 1; i < n; i++) {
        partialsum[i] += partialsum[i - 1];
        V[i] += partialsum[i];
    }
    for (int i = 0; i < n; i++) {
        cout << V[i] << " ";
    }
}