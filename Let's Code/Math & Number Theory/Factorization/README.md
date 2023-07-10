# Factorization
### [Factorization Calculator](https://www.mathsisfun.com/numbers/factors-all-tool.html#calc)

**Get the factors of numbers. factors are numbers from 1 to n that are dividing n without remendires**

## Implementation
```cpp
vector<ll> getDivisors(ll n) {
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
            if (n / i != i)
                v.push_back(n / i);
        }
    }
    sort(all(v));
    return v;
}
```

## `Properties` 
- For each iteration, we add 2 numbers except when the (n / i == i) which occurs only when the number is a perfect square
- So if the number is not a perfect square it will have an `even number of divisors`
- But if the number is perfect square it means that in one iteration we will add one number not 2 so numbers of `divisors will be odd`

## `How to check if a number has 3 divisors?`
- First, check if the number of divisors is odd -> `number is perfect square`
- Then check if the sqrt(n) is prime. if prime so the numbers have only 3 divisors `1 n sqrt(n)`


## Perfect Square
```cpp
bool isPerfectSquare(ll n){
    ll sq = sqrt(n);
    return sq * sq == n;
}
```
