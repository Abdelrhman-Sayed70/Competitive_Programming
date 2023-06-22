# String

# Functions

## `find`
- check if string a contains a string b or not
- return the index of first occurence of string b in string a. else return -1
```cpp
string s = "ababac";
if (s.find("ab") == -1) { cout << "not found"; }
else cout << s.find("ab") << "\n"; // 0 
```

## `rfind`
- same as find but returns the index of last occurence of string b in a else return -1
```cpp
string s = "ababac";
if (s.rfind("ab") == -1) { cout << "not found\n"; }
else { cout << s.rfind("ab") << "\n"; } // 2
```

## `sub_str`
