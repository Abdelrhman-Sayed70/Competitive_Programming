# bitset
## `Declaration`
**Convert decimal binary using to array of bits**
```cpp
int n;
cin >> n;
cout << decimalToBinary(n) << "\n";
bitset<32>b(n);
```

## `Convert to string`
```cpp
int n;
cin >> n;
bitset<32>b(n);
string s = b.to_string();
```

## `Convert binary to decimal`
```cpp
string s = "101011";
bitset<10>b(s);
cout << b.to_ullong(); // 43
```

## Indexing
```cpp

```

## `Update`
```
n = 13 // 1101
index:  3 2 1 0 
binary: 1 1 0 1
b[2] = 0
1 0 0 1
```
```cpp

```

# Built in Functions

## `any`
**returns if the binary representation contains bit = 1**
```cpp
int n;
cin >> n;
bitset<10>b(n);
cout << b.any();
```

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

```

## `reset`
**`make number or specific bit to 0`**
```cpp
```
