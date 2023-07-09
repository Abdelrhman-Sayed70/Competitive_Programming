# Sum Sequences

# Arithmatic Sequance

### `Arithmetic Sequence Sum = [(First Number + Last Number) / 2] * Number of Numbers`
```cpp
ll sumSequance(ll firstNumber, ll lastNumber, ll numberOfNumbers){
    ll ans = (firstNumber + lastNumber) * numberOfNumbers / 2 ;
    return ans;
}
```

## `Sum of even numbers`
```cpp
ll sumEven(ll a, ll b){
    // validate start & end
    if (a & 1)
        a++;
    if(b & 1)
        b--;
    if (a > b)
        return 0;

    // calculate
    ll numberOfNumbers = ((b - a) / 2) + 1;
    ll ans = ((a + b) * numberOfNumbers) / 2;
    return ans;
}
```
## `Sum of odd numbers`
```cpp
ll sumOdd(ll a, ll b){
    // validate start & end
    if (a % 2 == 0)
        a++;
    if(b % 2 == 0)
        b--;
    if (a > b)
        return 0;

    // calculate
    ll numberOfNumbers = ((b - a) / 2) + 1;
    ll ans = ((a + b) * numberOfNumbers) / 2;
    return ans;
}
```

### 

# Geometric Sequence

### `Geometric Sequence Sum = [(First Number) * (1 - ratio ^ Number of Numbers)] / (1 - ratio)`
```cpp
ll sumSequance(ll firstNumber, ll numberOfNumbers, ll ratio) {
    ll ans = (firstNumber * (1 - pow(ratio, numberOfNumbers))) / (1 - ratio);
    return ans;
}
```

## `Sum of numbers from a to b that are divisible by c`
```cpp
ll sum(ll n) {
    return n * (n + 1) / 2;
}
ll sumDivisible(ll a, ll b, ll c) {
    return sum(max(a, b) / c) * c - sum((min(a, b) - 1) / c) * c;
}
```
