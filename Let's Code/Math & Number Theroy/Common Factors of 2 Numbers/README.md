# Common Factors of Two Numbers
- First get gcd of 2 numbers. gcd has multiplication of common divisors of 2 numbers
- Do factorization on gcd

```cpp
vector<int> commonDivisors(int a, int b){
    ll gcd = __gcd(a, b); // held multiplication of common divisors

    // fatorization of gcd
    vector<int>divisors;
    for (int i = 1; i * i <= gcd; i++) {
        if (gcd % i == 0) {
            divisors.push_back(i);

            if (gcd / i != i)
                divisors.push_back(gcd / i);
        }
    }
    return divisors;
}
```
