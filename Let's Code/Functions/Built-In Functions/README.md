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

# `Permutations`
#### Get all permutations
```cpp
vector<int>v = { 1,2,3 };
sort(v.begin(), v.end()); // array must be sorted
do {
    for (auto i : v) { cout << i << " "; }
    cout << "\n";
} while (next_permutation(v.begin(), v.end()));
```

#### Get next permutation
```cpp
string s = "abc";
next_permutation(s.begin(), s.end());
cout << s; // acb
```

# `Unique`
#### Get unique elements in a **`Sorted`** array in O(N)
```cpp
vector<int>v = { 4,2,4,1,2,3 };
int n = v.size();
sort(v.begin(), v.end());
n = unique(v.begin(), v.end()) - v.begin();
cout << n; // 4
```
#### Remove duplicates in a **`Sorted`** array in O(N)
```cpp
vector<int>v = { 4,2,4,1,2,3 };
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());
```
