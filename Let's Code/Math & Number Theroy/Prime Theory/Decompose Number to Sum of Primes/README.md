# Decompose Number to Sum of Primes
**Any number can be summation of 1, 2 or 3 primes (or more of course)**

## Number is a summation of `1 prime`
- the number is prime

## Number is a summation of `2 primes`
- the number is even
- the number is odd and n - 2 is prime. first number = n - 2, second number = 2

## Number is a summation of `3 primes`
- the number is odd and the above condition is not satisfied ^_^
- you can get those 3 numbers using the Bruteforce algorithm. Don't worry it will pass 😂
```cpp
for (int i = 3;; i += 2) {
    if (isPrime(i)) {
        for (int j = 3; j < n; j += 2) {
            if (isPrime(j) and isPrime(n - (i + j))) {
                cout << i << " " << j << " " << n - (i + j);
                return;
            }
        }
    }
}
```
