# Combinations
## [Combinations | VJ](https://vjudge.net/contest/559993#problem/F)
## [Combinations | UVA](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=305)

## Solution
```cpp
ll nCr(ll n, ll r) {
    ll ans = 1;
    ll div = 1; // held r!
    for (ll i = r + 1; i <= n; i++) {
        ans *= i;
        ans /= div;
        div++;
    }
    return ans;
}
void doIt(){
    int n, m;
    while(cin >> n >> m){
        if (!n and !m)
            break;
        ll ans = nCr(n, m);
        cout << n << " things taken " << m << " at a time is " << ans << " exactly.\n";
    }
}
```
