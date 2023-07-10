# GCD Arrays
## [GCD Arrays | Codeforces](https://codeforces.com/contest/1629/problem/B)

## Approach
- Remember that gcd of even numbers is >= 2
- So i need to check if i can convert all numbers to even numbers
- Multiplication of 2 consecutive numbers (odd, even) gives even number 


## Solution
```cpp
void doIt() {
    ll a, b, k;
    cin >> a >> b >> k;
    if (a == b ) {
        if (a == 1) {
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
        return;
    }
    ll nums = b - a + 1;
    if (nums & 1){
        if (b & 1){
            nums++;
        }
        cout << (k >= (nums / 2) ? "YES\n" : "NO\n");
    }
    else
        cout << (k >= nums / 2 ? "YES\n" : "NO\n");
}
```
