# bitset
## `Declaration`
**Convert decimal binary using an array of bits**
```cpp
int n = 13;
bitset<5>b(n);
cout << b; // 01101
cout << "\n" << b[0] << b[1] << b[2]; // 101
```

## `Convert to string`
```cpp
int n = 13;
bitset<5> b(n); // 01101
cout << b << "\n"; // 01101
string s = b.to_string();
cout << s << "\n"; // 01101 [same as representation of bitset]
cout << s[0] << s[1] << s[2]; //011
```

## `Convert binary to decimal`
```cpp
string s = "101011";
bitset<10>b(s);
cout << b.to_ullong(); // 43
```
---
## Indexing
### `bitset`
`Indexing in bitset is from right to left [2^0, 2^1, 2^2, ...]`
```cpp
int n = 13;
bitset<5>b(n);
cout << b; // 01101
cout << "\n" << b[0] << b[1] << b[2]; // 101
```
### `string`
`Indexing in a string from left to right [from last bit to first bit]`
```cpp
int n = 13;
bitset<5> b(n); // 01101
cout << b << "\n"; // 01101
string s = b.to_string();
cout << s << "\n"; // 01101 [same as representation of bitset]
cout << s[0] << s[1] << s[2]; //011
```

---


## `Update`
```cpp
int n = 13;
bitset<5> b(n); // 01101
cout << b << " : with value: " << b.to_ullong(); // 01101 with value 13
b[1] = 1;
cout << "\n" << b << " : with value: " << b.to_ullong() ; // 01111 : with value: 15
```
---

# Built-in Functions

## `any`
**returns if the binary representation contains bit = 1**
```cpp
int n;
cin >> n;
bitset<10>b(n);
cout << b.any();
```
---

## `count`
**return numbers of 1 bits**
```cpp
int n = 5;
bitset<10>b(n);
cout << b.count(); // 2
```


## `set`
**`make a number or specific bit to 1`**
****
```cpp
string s = "1101101";
bitset<8>b(s);
b.set(1);
cout << b; // 1101111
```

## `reset`
**`make number or specific bit to 0`**
```cpp
string s = "1101101";
bitset<8>b(s);
b.reset();
cout << b; // 00000000
```
```cpp
string s = "1101101";
bitset<8>b(s);
b.reset(0);
cout << b; // 1101100
```


## `flip`
```cpp
int n = 13;
bitset<5> b(n); // 01101
cout << b << "\n";
b.flip(1);
cout << b; // 01111
```
