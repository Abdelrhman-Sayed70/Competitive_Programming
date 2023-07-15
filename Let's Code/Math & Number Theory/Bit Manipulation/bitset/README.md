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

## `Convert to decimal`
```cpp
int n = 13; // 1101
bitset<32>b(n);
cout << b.to_ullong();
```
