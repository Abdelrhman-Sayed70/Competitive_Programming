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
- same as find but returns the index of last occurence of string b in a else return -1
```cpp
string s = "ababac";
if (s.rfind("ab") == -1) { cout << "not found\n"; }
else { cout << s.rfind("ab") << "\n"; } // 2
```

# `stoi` and `stol`
converts the string to int and ll
```cpp
string s = "123";
int intNum = stoi(s);
ll llNum = stol(s);
cout << llNum; 
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

# `convert char to strnig`
```cpp
char ch; 
cin >> ch;
string s;
s += ch;
```
