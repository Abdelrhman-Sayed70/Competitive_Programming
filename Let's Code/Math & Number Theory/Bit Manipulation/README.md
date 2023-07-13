# Bit Manipulation
## `Convert Decimal Number to Binary`
- 6 = **110** = `(2^0)*0` + `(2^1)*1` + `(2^2)*1` 
```cpp
string decimalToBinary(ll n){
    string s;
    while(n){
        s += (n % 2) + '0';
        n /= 2;
    }
    reverse(all(s));
    return s;
}
```
