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

# `Set Traverse`
**Traversing done using iterator**
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
