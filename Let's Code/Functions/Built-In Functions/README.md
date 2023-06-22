# Built-In Functions

# `count`
```cpp
vector<int>v = { 1,2,3,1,1 };
int ones = count(v.begin(), v.end(), 1);
cout << ones; // 3
```

# `is_sorted`
```cpp
vector<int>v = { 1,1,3 };
cout << is_sorted(v.begin(), v.end()); // 1
```

# `Min-Max`
```cpp
cout << min(1, 3); 
cout << min({ 1,2,3 });
```
```cpp
vector<int>v = { 1,2,0 };
int mn = *min_element(v.begin(), v.end());
int mx = *max_element(v.begin(), v.end());
```
