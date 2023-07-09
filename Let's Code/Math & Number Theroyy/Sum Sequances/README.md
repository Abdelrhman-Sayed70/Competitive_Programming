# Sum Sequences
### `Arithmetic Sequence Sum = [(First Number + Last Number) / 2] * Number of Numbers`
```cpp
ll sumSequance(ll firstNumber, ll lastNumber, ll numberOfNumbers){
    ll ans = ((firstNumber + lastNumber) / 2) * numberOfNumbers;
    return ans;
}
```

### `Geometric Sequance Sum = [(First Number) * (1 - ratio ^ Number of Numbers)] / (1 - ratio)`
```cpp
ll sumSequance(ll firstNumber, ll numberOfNumbers, ll ratio) {
    ll ans = (firstNumber * (1 - pow(ratio, numberOfNumbers))) / (1 - ratio);
    return ans;
}
```
