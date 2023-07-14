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
for(int i = 31; ~i and cout << b[i]; i--); // 000..1101
```
**Using string**
```cpp
int n = 13; // 1101
bitset<32>b(n);
string s = b.to_string();
cout << s; //00..1101
```

## `Update`
```cpp

```



## `Convert to decimal`
```cpp

```
