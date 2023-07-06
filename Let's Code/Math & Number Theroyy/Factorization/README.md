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
