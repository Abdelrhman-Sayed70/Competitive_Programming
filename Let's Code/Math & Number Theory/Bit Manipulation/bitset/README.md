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

## `Traversing`
**Using bitset**
```cpp
int n = 13; // 1101
bitset<32>b(n);
for(int i = b.size() - 1; ~i and cout << b[i]; i--); // 000..1101
```
**Using string**
```cpp
int n = 13; // 1101
bitset<32>b(n);
string s = b.to_string();
cout << s; //00..1101
```

## `Update`
```
n = 13 // 1101
index: 3 2 1 0 
       1 1 0 1
b[2] = 0
1 0 0 1
```
```cpp
int n = 13; // 1101
bitset<6>b(n);
for(int i = b.size() - 1; ~i and cout << b[i]; i--); // 000..1101
b[2] = 0;
cout << "\n";
for(int i = b.size() - 1; ~i and cout << b[i]; i--); // 000..1001
cout << "\n" << b.to_ullong();
```

## `Convert binary to decimal`
```cpp
string s = "101011";
bitset<10>b(s);
cout << b.to_ullong(); // 43
```

## `Convert to decimal`
```cpp
int n = 13; // 1101
bitset<32>b(n);
cout << b.to_ullong();
```

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
