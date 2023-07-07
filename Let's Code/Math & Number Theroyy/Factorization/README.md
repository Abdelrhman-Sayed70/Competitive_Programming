# Factorization
**Get the factors of numbers. factors are numbers from 1 to n that are dividing n without remendires**

## Implementation
```cpp
void doIt() {
    int n;
    cin >> n;
    vector<int>factors;
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            factors.push_back(i);
            if (n / i != i)
                factors.push_back(n / i);
        }
    }
}
```

## `Properties` 
- For each iteration, we add 2 numbers except when the (n / i == i) which occurs only when the number is a perfect square
- So if the number is not a perfect square it will have `even number of divisors`
- But if the number is perfect square it means that in one iteration we will add one number not 2 so numbers of `divisors will be odd `


## Perfect Square
```cpp

```
