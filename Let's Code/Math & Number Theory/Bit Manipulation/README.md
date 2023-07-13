# Bit Manipulation
## [Bit Manipulation Calculator](https://miniwebtool.com/bitwise-calculator/?data_type=10&number1=10&number2=5&operator=AND)
## `And [&]`
- **Return 1 if 2 bits are 1, else return 0**
- **ans <= min(a, b)**

## `Or [|]`
- **Return 1 if at least one bit is 1, else return 0**
- **ans >= max(a, b)**

## `XOR [^]`
- **Return 1 if 2 bits are different, else return 0**
- **ans is unpredicted**
  
### Properties
- 0 ^ n = n
- n ^ n = 0
- (A ^ B ^ C ^ D ^ E) ^ (A ^ B ^ C) = D ^ E

## `Not [~]`
- **Reverse the bit**
- ~(-1) = 0
```cpp
vector<int> v = {1, 2, 3, 4};
int n = v.size();
for(int i = n - 1; ~i; i--)
    cout << v[i] << " "; // 4 3 2 1
```

## `Left Shift`
- Shift all bits to the left
- add shift_times zeroes to most right
- n << shift_times = n * pow(2, shift_times)
- 5 << 3 = 5 * pow(2, 3)

  
## `Right Shift`
- Shift all bits to the right
- Remove the most right bits
- n >> shifht_times = n / pow(2, shift_times)
- 5 >> 1 = 5 / pow(2, 1)

## `Convert Decimal Number to Binary`
- 6 = **110** = `(2^0)*0` + `(2^1)*1` + `(2^2)*1` 
```cpp
string decimalToBinary(ll n){
    string s;
    while(n){
        s += (n % 2) + '0';
        n /= 2;
    }
    reverse(all(s));
    return s;
}
```

## `Convert Binary to Decimal`
```cpp

```

## `Even Odd Checking`
- **The most right bit [2^0] Will determine if the number is odd or even**
- If the right-most bit is 1 so it will give an `odd number` (2^0) * 1 = 1. while other digits will give an even number
- Else the numbers is even
```cpp
int n;
cin >> n;
if(n & 1)
    cout << "odd";
else
    cout << "even";
```
