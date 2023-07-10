# Modified GCD
## [Modified GCD | Codeforces](https://codeforces.com/problemset/problem/75/C)

## Solution
```cpp
vector<ll> getFactors(ll g) {
    vector<ll> factors;
    for (ll i = 1; i * i <= g; i++) {
        if (g % i == 0) {
            factors.push_back(i);
            if (g / i != i)
                factors.push_back(g / i);
        }
    }
    sort(all(factors));
    return factors;
}
void doIt() {
     int a, b;
     cin >> a>>b;
     ll g = __gcd(a, b);
     vector<ll>factors = getFactors(g);

     int q;
     cin >> q;
     while(q--){
         int low, high;
         cin >> low >> high;

         auto it = upper_bound(all(factors), high);
         it = prev(it);
         cout << ((*it >= low and *it <= high) ? *it : -1) << "\n";
     }
}
```
