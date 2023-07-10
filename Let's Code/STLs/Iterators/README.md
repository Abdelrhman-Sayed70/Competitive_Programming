# Iterators
## `Prev & Next`
```cpp
vector<int>v = {1, 2, 3, 4};
auto it = v.begin(); // *it = 1
it = next(it); // *it = 2
cout << *it << "\n"; // 2

cout << *(prev(v.end())); // 4

```

## `Increment iterator`
```cpp
vector<int>v = {1, 2, 3, 4};
auto it = v.begin(); // *it = 1
it++;
cout << *it; // 2
```
```cpp
vector<int>v = {1, 2, 3, 4};
auto it = v.begin(); // *it = 1
advance(it, 1);
cout << *it; // 2
```
