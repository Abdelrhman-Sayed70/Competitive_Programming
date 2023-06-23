# Set & Multiset
#### `Set` auto sort & no duplicates 
#### `Multiset` auto sort with duplicates
# `Set Insert`
```cpp
set<int>st;
vector<int>v = { 2,2 ,1,1,3,3,0 };
for (auto i : v) {
    st.insert(i);
}
```
```cpp
vector<int>v = { 2,2 ,1,1,3,3,0 };
set<int>st(v.begin(), v.end());
```

**size and clear**
```cpp
vector<int>v = { 2,2 ,1,1,3,3,0 };
set<int>st(v.begin(), v.end());
cout << st.size() << "\n"; // 4
st.clear();
cout << st.size(); // 0
```

# `Set Traverse`
**Traversing done using iterator**
### `Traverse ascending`
```cpp
vector<int>v = { 2,2 ,1,1,3,3,0 };
set<int>st(v.begin(), v.end());
for (auto it : st) {
    cout << it << " ";
}
// 0 1 2 3
```
```cpp
vector<int>v = { 2,2 ,1,1,3,3,0 };
set<int>st(v.begin(), v.end());
set<int>::iterator it = st.begin(); // auto it = st.begin();
for (it; it != st.end(); it++) {
    cout << *it << " ";
}
```
### `Traverse descending`
```cpp
set<int>st;
st.insert(1);
st.insert(5);
st.insert(2);
st.insert(4);

set<int>::reverse_iterator it = st.rbegin();
for (it; it != st.rend(); it++) {
    cout << *it << " ";
}
// 5 4 2 1
```

# `find`
```cpp

```

# `Multiset`
```cpp


```
