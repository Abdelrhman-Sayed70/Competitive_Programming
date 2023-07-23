# Represent Multiplication of Divisors as `a power b`
- **As the multiplication of bigger numbers can not fit in data type so we want to represent it in `a power b` form**
- Given integer n, represent the multiplication of its divisors as a power b form
## [Is It A Math Problem? | Codeforces](https://codeforces.com/group/ARb1vgiFev/contest/454000/problem/A)
![image](https://github.com/Abdelrhman-Sayed70/Competitive_Programming/assets/99830416/72b485e9-2ee0-4756-814c-aec1c94d0c24)


## Solution
```cpp
bool isPerfectSquare(ll n){
    ll sq = sqrt(n);
    return sq * sq == n;
}
void doIt() {
    ll n, cnt = 0;
    cin >> n;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (n / i != i) {
                cnt++;
            }
        }
    }
    if (isPerfectSquare(n)) {
        ll sq = sqrt(n);
        cout << sq << " " << cnt;
    } else {
        cout << n << " " << cnt / 2;
    }
}
```
