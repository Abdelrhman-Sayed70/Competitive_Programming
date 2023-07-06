# Modular Arithmetic
**What does `a % b` mean? the *`smallest positive`* integer number such that `a - m` is a multiple of b / divisible by b**

- `14 % 3 = 2` **14 - 2 = 12. 12 is a multiple of 3**
- `4 % 5 = 4`

## General Rule `a % b = mod`
- `a < b` `mod = a`
- `a = b` `mod = 0`
- `a > b` `0 <= mod < b - 1`
- `b == 0` `Math error`

## `Cyclic Identity`
For the given list get the mod with 5

- list `1 2 3 4 5 6 7 8 9 10 11 12 13`
- ans  `1 2 3 4 0 1 2 3 4 0  1  2  3`
- the answer is always between 0 and 5 - 1 = 4

## `Mod of Negative Number`
**`-num % c`**
- still add c to the number till became >= 0
- then get the mod

**`-8 % 3`**
- -8 + (3 * 3) = 1
- 1 % 3 = 1

**`-4 % 2`**
- -4 + (2 * 2) = 0
- 0 % 2 = 0

  

## `Properties`
**Helps a lot to avoid overflow**
- `(a + b) % c = [ (a % c) + (b % c) ] % c`
- `(a * b) % c = [ (a % c) * (b % c) ] % c`
- `(a - b) % c  = [ (a % c) - (b % c) + c] % c`

## Implementation
```cpp
ll add(ll a, ll b, ll c){
    return ((a % c) + (b % c)) % c;
}
ll subtract(ll a, ll b, ll c){
    return ((a % c) - (b % c) + c) % c;
}
ll multiply(ll a, ll b, ll c){
    return ((a % c) * (b % c)) % c;
}
```
