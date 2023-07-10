# 👌 `GCD`
## [GCD calculator](https://www.mathsisfun.com/greatest-common-factor-tool.html)

**GCD of 2 numbers is the greatest number that divides a, b without remainders**

**`GCD of 2 numbers held the multiplication of common divisors between 2 numbers`**
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
- **`1 <= gcd(a, b) <= min(a, b)`**
- **gcd of 2 even numbers always >= 2. 2 <= gcd(ev, ev) <= min(a, b)**
- GCD(array elements after adding x) = **`gcd(a[0] + x, gcd(a[1] - a[0], ...., a[n - 1] - a[0])`** such that array is **sorted**

## `GCD Implementation`
```cpp
int a, b;
cin >> a >> b;
cout << __gcd(a, b);
```
```cpp
ll gcd(ll a,  ll b) {
    // recursive 
    // gcd(a,b) =gcd(b,a%b)
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
ll gcd(ll a, ll b) {
    // iterative 
    // gcd(a,b) =gcd(b,a%b)
    while (b != 0) {
        ll a2 = a;
        a = b;
        b = a2 % b;
    }
    return a;
}
```

# 👌 `LCM`
## [LCM Calculator](https://www.mathsisfun.com/least-common-multiple-tool.html)


**Least common multiple, the smallest number that is multiple of a, b *e.g divisible by a, b***

**lcm(3, 8) = 24** `multiples of 3: (3, 6, 9, 12, 15, 18, 21, 24, ..)` `multiples of 8: (8, 16, 24, ..)`

## `How LCM Works`
**Get the prime factors of 2 numbers and for each repeated factor, choose the most frequent**

a = 2 * 2 * 3 * 3 * 5 * 7

b = 2 * 3 * 5 * 5 * 7 * 7

LCM(a, b) = (2 * 2) * (3 * 3) * (5 * 5) * (7 * 7)

## `LCM Rule`
LCM(a, b) = (a * b) / gcd(a, b)

## `LCM Properties`
- lcm between 2 numbers that are multiples of each other = max(a, b). lcm(6, 18) = 18
- lcm(1, n) = n
- lcm(0, n) Error
- gcd(a, b) * lcm(a, b) = a * b
- gcd(a, b) + lcm(a, b) = x. when `a = 1` `b = x - 1`
- to get the lcm of more than 2 numbers first set lcm = 1 as lcm (1, n) = n

## `LCM Implementation`
```cpp
ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    // lcm(a,b) = (a*b) / gcd(a,b)
    return a / gcd(a, b) * b;
}
```
```cpp
ll lcm(ll a, ll b)
    return  a / __gcd(a, b) * b;
```
