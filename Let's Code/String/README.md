# String

# `find`
- check if string a contains a string b or not
- return the index of first occurence of string b in string a. else return -1
```cpp
string s = "ababac";
if (s.find("ab") == -1) { cout << "not found"; }
else cout << s.find("ab") << "\n"; // 0 
```

# `rfind`
**same as find but returns the index of last occurence of string b in a else return -1**
```cpp
string s = "ababac";
if (s.rfind("ab") == -1) { cout << "not found\n"; }
else { cout << s.rfind("ab") << "\n"; } // 2
```

# `Convert string to number`
```cpp
string s = "123";
int intNum = stoi(s);
ll llNum = stol(s);
cout << llNum; 
```

# `Convert number to string`
```cpp
int num = 10;
string str = to_string(num);
cout << str;
```

# `Convert char to string`
```cpp
char ch; 
cin >> ch;
string s;
s += ch;
```

# `Convert 1 digit to char`
```cpp
int n = 5;
char ch = n + '0';
```

# `Convert char to number`
```cpp
char ch = '4';
int num = ch - '0';
```
```cpp
string s = "123";
int sum = 0;
for (auto it : s) {
    sum += (it - '0');
}
cout << sum; // 6
```

# `erase`
#### `str.erase(pos)`
remove from index pos to the end of the string
```cpp
string s = "abcdef";
s.erase(1);
cout << s; // "a" 
```
#### `str.erase(pos, length)`
remove from index pos length characters
```cpp
string s = "abcdef";
s.erase(1, 2);
cout << s; // "adef"
```

# `substr`
#### `str.substr(pos)`
get the string from index pos to the end
```cpp
string s = "abcdef";
string sub = s.substr(2); //cdef
```
#### `str.substr(pos, length)`
get the string from string index length characters
```cpp
string s = "abcdef";
string sub = s.substr(2, 2); // cd
```

# `insert`
#### `str.insert(int pos, string s)`
insert string s at index pos
```cpp
string str = "abc";
str.insert(0, "AB");
cout << str; // ABabc
```
##### `s.insert(int pos , int size ,char ch)`
insert char ch at index pos size times
```cpp
string s = "abcdef";
s.insert(0, 1, 'R');
cout << s << "\n"; // Rabcdef
```

```cpp
string s = "abcdef";
s.insert(2, 4, 'R');
cout << s << "\n"; // abRRRRcdef
```

# `append`
#### `str.append(int freq, char ch)`
append to the end of the string char ch freq times
```cpp
string s = "abcdef";
s.append(3, 'F'); 
cout << s; //abcdefFFF
```

# `Get many lines`
```cpp
string s;
int n; cin >> n;
vector<string>v;
cin.ignore();
while (n--) {
    getline(cin, s);
    v.push_back(s);
}
for (auto it : v) { cout << it << "\n"; }
```

# `Lower and Upper`

## Char
#### Convert char 
```cpp
string s = "aB";
s[0] = toupper(s[0]);
s[1] = tolower(s[1]);
cout << s << "\n"; // Ab
```
#### Check char
```cpp
char ch = 'A';
cout << isupper(ch); // 1
```

## String
```cpp
string str = "abd";
transform(str.begin(), str.end(), str.begin(), ::toupper);
cout << str << "\n";
```

## Test
