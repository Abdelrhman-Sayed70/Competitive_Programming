# Bit Manipulation
## [Bit Manipulation Calculator](https://miniwebtool.com/bitwise-calculator/?data_type=10&number1=10&number2=5&operator=AND)
## `And [&]`
- **Return 1 if 2 bits are 1, else return 0**
- **ans <= min(a, b)**
- initial value for and all elements can be any element of the array or can be the greatest element with all ones (1 << 30) - 1

## `Or [|]`
- **Return 1 if at least one bit is 1, else return 0**
- **ans >= max(a, b)**

## `XOR [^]`
- **Return 1 if 2 bits are different, else return 0**
- **the res contains numbers of bits = 1 representing that binary rep was different at those positions**
- **ans is unpredicted**
- `a + b = ( a ^ b ) + 2 ( a & b )` 


### Properties
- 0 ^ n = n
- n ^ n = 0
- (A ^ B ^ C ^ D ^ E) ^ (A ^ B ^ C) = D ^ E

**The next roles are the same for multiplication**

- odd ^ odd = odd
- even ^ even = even
- odd ^ even = odd 

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

## `Nearest [smaller or equal] Power of 2 of the Number`
**return the nearest [smaller of equal] power of 2 from the number**
```cpp
int thePowerOf(ll n) {
    // return the nearest [smaller of equal] power of 2 from the number
    return log(n) / log(2);
}
```



## `Number with all bits = 1` `PM1`
- (Power of 2) - 1
- `4: 100` `3: 11`
- `8: 1000` `7: 111`


## `Number with exactly one bit = 0`
- PM1 - Power of 2
- 7 - 2 = 5 `101`

```cpp
vector<ll>one0Bit;
void pre(){
    for(ll i = 2; i < 64; i++){
        ll pm1 = (1LL << i) - 1;
        for(int j = 0; j <= i - 2; j++){
            one0Bit.push_back(pm1 - (1LL << j));
        }
    }
    sort(all(one0Bit));
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
**Echanced**
```cpp
int countBit1(ll n) {
    int cnt = 0;
    while (n) {
        cnt++;
        n &= (n - 1);
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
int flipBit(int n, int index) {
    return n ^ (1 << index);
}
```

## `n - 1`
still iterating on bits and turn to 1 while bits are 0, and when bit is 1 turn to 0 and break
```
n = 101001000
n - 1 = 101000111

n = 1011
n - 1 = 1010
```
- **so to remove first bit = 1 we can simply make `n & (n - 1)`**
- can be used to enhance countBits1 function

```cpp
int countBit1(ll n) {
    int cnt = 0;
    while (n) {
        cnt++;
        n &= (n - 1);
    }
    return cnt;
}
```


## `lastBitValue`

`1001100. last bit value: 100`

```cpp
int lastBitValue(int num){
    return num & ~(num - 1);
}
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
