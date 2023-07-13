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

## `Convert Binary to Decimal`
```cpp

```

## `Even Odd Checking`
- **The most right bit [2^0] Will determine if the number is odd or even**
- If the right-most bit is 1 so it will give an `odd number` (2^0) * 1 = 1. while other digits will give an even number
- Else the numbers is even
```cpp
int n;
cin >> n;
if(n & 1)
    cout << "odd";
else
    cout << "even";
```
