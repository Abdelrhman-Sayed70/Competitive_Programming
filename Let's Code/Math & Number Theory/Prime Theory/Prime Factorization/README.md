# Prime Factorization
## [Prime Factorization Calculator](https://www.calculatorsoup.com/calculators/math/prime-factors.php)
## `Prime Number`
The number has only 2 divisors, 1 and itself.

## `Prime Factorization`
`Get the prime factors of a number`
- n = 15. Prime Factors: 3 * 5
- n = 8. Prime Factors: 2 * 2 * 2
- n = 24. Prime Factors: 2 * 2 * 2 * 3

## Properties
- Subtraction any prime divisor from n get even result alwayes


## Implementation
```cpp
void doIt() {
    int n;
    cin >> n;

    map<int,int>mp;
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            mp[i]++;
            n /= i;
        }
    }   
    if (n != 1)
        mp[n]++;

    // print prime factors
    for(auto it: mp){
        cout << "factor: " << it.first << ", count: " << it.second << "\n";
    }
}
```
