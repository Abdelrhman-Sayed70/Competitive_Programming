# 👌 `GCD`
**GCD of 2 numbers is the greatest number that divides a, b without remainders**
- gcd(20, 15) = 5
- gcd(6, 3) = 3
- gcd(7, 5) = 1
- gcd(0, 5) = 5

## `GCD with Prime Factorization` 
- **Get prime factors of each number, the gcd will be the multiplication of the common numbers**
- Complexity: O(sqrt(max n))

## `GCD with Euclidian Algorithm`
- `gcd(a, b) = gcd(b, a % b)`
- Complexity: O(log(max(n)))

## `GCD Properties`
- **gcd(0, n) = n**
- **gcd(1, n) = 1**
- **gcd(n, n + 1) = 1**
- **gcd(a!, b!) = min(a, b)!**

## `GCD Implementation`
```cpp
int a, b;
cin >> a >> b;
cout << __gcd(a, b);
```

# 👌 `LCM`

