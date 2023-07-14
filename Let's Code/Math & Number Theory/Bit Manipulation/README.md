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

## `Left Shift <<`
- Shift all bits to the left
- add shift_times zeroes to most right
- n << shift_times = n * pow(2, shift_times)
- 5 << 3 = 5 * pow(2, 3)

  
## `Right Shift >>`
- Shift all bits to the right
- Remove the most right bits
- n >> shifht_times = n / pow(2, shift_times)
- 5 >> 1 = 5 / pow(2, 1)


## `Power of 2`
- N is the power of 2 when contains only `one bit = 1` at the leftmost
- N is the power of 2, so N - 1 all bits are 1
- Anding n with n - 1 will get 0
- 4: 100, 3: 011. 4 & 3 = 0

```cpp
bool ispowerOf2(ll n){
    return (n and !(n & (n - 1)));
}
```

## `X % pow(2, n)`
- (x: 1 0 1 0 1 1) % pow(2, 4)
- (x: 2^5 + 2^3 + 2^1 + 2^0) % pow(2, 4)
- any powers more than or equal to 4 will be divisible on 2^4. else will be the answer
- so we can say that the answer will be x & (pow(2, 4) - 1)
  
```cpp
int x , n;
cin >> x >> n ;
cout << decimalToBinary(x) << "\n";
int mod = 1 << n;
int ans = x & (mod - 1);
cout << decimalToBinary(ans);
```

## `countBit1`
```cpp
int countBit1(int n){
    int cnt = 0;
    while(n){
        cnt += n & 1;
        n >>= 1;
    }
    return cnt;
}
```

## `countBit0`
```cpp
int countBit0(int n){
    int cnt = 0;
    while(n){
        cnt += !(n & 1);
        n >>= 1;
    }
    return cnt;
}
```

## `getBit`
```cpp
bool getBit(int num, int index){
    return (1 << index) & num;
}
```
```cpp
bool getBit(int num, int index) {
    return (num >> index) & 1;
}
```
## `setBit`
```cpp
int setBit(int num, int index){
    // make bit = 1
    return (num | (1 << index));
}
```
## `resetBit`
```cpp
int resetBit(int num, int index){
    // make bit = 0
    return num & ~(1 << index);
}
```


## `flipBit`
```cpp

```




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
