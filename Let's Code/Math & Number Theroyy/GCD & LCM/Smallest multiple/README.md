# Smallest multiple
## [Smallest multiple | HackerRank](httpswww.hackerrank.comcontestsprojecteulerchallengeseuler005problem)

## Solution
```cpp
ll lcm(ll a, ll b){
    return  a / __gcd(a, b) * b;
}
void doIt() {
    int n;
    cin >> n;
    ll _lcm = 1;
    for (ll i = 1; i <= n; i++) {
        _lcm = lcm(_lcm, i);
    }
    cout << _lcm << "\n";
}
```
