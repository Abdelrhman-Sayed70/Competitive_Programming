# Counting

# Addition `Disjoint Events`
**in case of disjoint events. `total number of ways = summation of wayes`**

Someone wants to travel from A to B. he can travel by sea, road, and air
- 2 ways by sea
- 3 ways by air
- 2 ways by road
So **Total number of wayes = 2 + 3 + 2 = 7** 


# Multiplication `Joint Events`
**In case of joint events. `total number of ways = multiplication of ways`**

Someone wants to travel from A to D passing by B, C
- 2 ways to travel from A to B
- 4 ways to travel from B to C
- 3 ways to travel from C to D

So **Total number of ways = 2 * 4 * 3**

# Number of subsequences
number of non-zero subsequence = `(2^n) - 1`

# Number of subarrays
`n * (n + 1) / 2`

# Permutation
## [Permutation Calculator](https://www.calculatorsoup.com/calculators/discretemathematics/permutations.php)
### Definition
- **number of ways to arrange r different objects from n objects**
- `order is matter`. `ab != ba`
```
A = {a, b, c}
generate all 2 permutations ab ba ac ca bc cb
```
### Rule
```
nPr = n! / (n - r)!
```
### nPr
```cpp
ll nPr(ll n, ll r){
    ll res = 1;
    for(ll i = n - r + 1; i <= n; i++){
        res *= i;
    }
    return res;
}
```
### Modular nPr
```cpp
ll multiply(ll a, ll b, ll c){
    return ((a % c) * (b % c)) % c;
}
ll nPr(ll n, ll r){
    ll res = 1;
    for(ll i = n - r + 1; i <= n; i++){
        res = multiply(res, i, mod);
    }
    return res;
}
```

# Combination
## [Combination Calculator](https://www.calculatorsoup.com/calculators/discretemathematics/combinations.php)

- number of different ways to generate r different elements from n elements
- order does not matter. `ab = ba` `abc = bca = acb`

```
nCr = nPr / r! = n! / [(n - r)! * (r)!]
```

```cpp
ll nCr(ll n, ll r){
    ll ans = 1;
    ll div = 1; // held r!
    for(ll i = r + 1; i <= n; i++){
        ans *= i;
        ans /= div;
        div++;
    }
    return ans;
}
```
