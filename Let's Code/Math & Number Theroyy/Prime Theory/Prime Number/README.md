# Prime Number
**Prime number is a number that has 2 divisors only, 1 and its self**

## Implementation
```cpp
bool isPrime(int n){
    if (n < 2)
        return false;

    for(int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
void doIt() {
     int n;
     cin >> n;
     cout << n << ": " << (isPrime(n)?"Prime":"Not Prime");
     cout << "\n";
}
```
