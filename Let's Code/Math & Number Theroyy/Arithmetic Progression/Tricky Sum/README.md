# Tricky Sum

## Solution1
```cpp
void doIt() {
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    int po = 0;
    ll num = 1;
    while(num <= n){
        sum -= 2 * num;
        po++;
        num = pow(2, po);
    }
    cout << sum << "\n";
}
```
