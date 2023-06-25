# Pipeline
## [Pipeline | Codeforces](https://codeforces.com/group/T3p02rhrmb/contest/343396/problem/W)

## Logic


## Solution
```cpp
ll sumAtoB(ll a, ll b) {
    // fucken math rule to sumup numbers from a to b :)
    return (a + b) * (b - a + 1) / 2;
}
bool can(ll num, ll n, ll k) {
    ll sum = sumAtoB(num, k - 1);
    sum++;
    return sum >= n;
}
void doIt() { 
    ll n, k;
    cin >> n >> k;
    if (n == 1) {
        cout << 0;
        return;
    }

    ll start = 1, end = k - 1, mid, ans = -1;
    while (start <= end) {
        mid = (start + end) / 2;
        if (can(mid, n, k)) {
            start = mid + 1;
            ans = k - mid;
        }
        else {
            end = mid - 1;
        }
    }
    cout << ans;
}
```