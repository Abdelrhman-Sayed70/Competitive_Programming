# Prime Number
## [Prime Checking | Codeforces](https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/B)

**Prime number is a number that has 2 divisors only, 1 and its self**

## Implementation
```cpp
bool isPrime(ll n){
    if (n < 2)
        return false;

    for(ll i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
void doIt() {
     ll n;
     cin >> n;
     cout << (isPrime(n) ? "YES" : "NO");
}
```
