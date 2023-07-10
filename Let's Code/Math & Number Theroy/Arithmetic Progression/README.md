# Arithmetic Progression
**Sequence of numbers such that the difference between every 2 consecutive numbers is constant**
## `Examples`
  - 1 2 3 4 [diff = 1]
  - 2 5 8 [diff = 3]

## `Notes`

- Any number can be even or odd
- I can start with any number and increase the constant value

## `Arithmetic Sequence Sum`
**[(First Number + Last Number) / 2] * Number of Numbers**
```cpp
ll sumSequance(ll firstNumber, ll lastNumber, ll numberOfNumbers){
    ll ans = ((firstNumber + lastNumber) / 2) * numberOfNumbers;
    return ans;
}
```

## `Get the number of given index`

2 5 8 11 [diff = 3]
- a1 = 2

- a2 = 2 + 3

- a3 = 2 + (2 * 3)

- a4 = 2 + (3 * 3)

- **`an = a1 + (n - 1) * diff`**


## `Check if a number exists in a range`
**Given start, difference, and value to search for. check if the value is exist in this sequance**

`searchFor = start + (k * diff)` we want to check if k is int
```cpp
bool exists(double start, double diff, double searchFor){
    double check = (searchFor - start) / diff;
    return check == int(check);
}
```
