# Map

## `Map Declaration`
`auto sort by key`
```cpp
map<string, int>mp;
mp["ahmed"] = 1;
mp["mohmed"] = 2;
mp["abdo"] = 1;
```
## `Map Traversal`
```cpp
map<string, int>mp;
mp["ahmed"] = 1;
mp["mohmed"] = 2;
mp["abdo"] = 1;
for (auto it : mp) 
    cout << it.first << " " << it.second << '\n';
```
```cpp
map<string, int>mp;
mp["b"] = 20;
mp["c"] = 20;
mp["a"] = 22;
for (auto it : mp) {
  cout << it.first << " " << it.second << "\n";
}
```
**Traverse descendingly**
```cpp
map<char, int>mp;
mp['A'] = 1;
mp['B'] = 100;
mp['D'] = 22;
mp['C'] = 15;
map<char, int>::reverse_iterator it = mp.rbegin();
for (it; it != mp.rend(); it++) {
  cout << it->first << " " << it->second << "\n";
}
// D C B A 
```

# `Upper & Lower bound`
```cpp
map<char, int>mp;
mp['a'] = 20;
mp['b'] = 40;
mp['c'] = 60;
mp['d'] = 80;
mp['e'] = 100;
map<char, int>::iterator itlow, itup;
itlow = mp.lower_bound('b');  // itlow points to b
itup = mp.upper_bound('d');   // itup points to e	
cout << itlow->first << " " << itup->second; // b 100
```

# `erase one element`
```cpp
map<char, int>mp;
mp['a'] = 20;
mp['b'] = 40;
mp['c'] = 60;
auto it = mp.find('a');
if (it!=mp.end()) 
  mp.erase(it); // or mp.erase('a') key 
```
