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
`st.find(val)`
- return iterator to the first val in the set
- or return st.end in case of no val in the set
```cpp
vector<int>v = { 2,2 ,1,1,3,3,0 };
set<int>st(v.begin(), v.end());
cout << (st.find(2) != st.end() ? "Found\n" : "Not Found\n");
```

# `erase`
**`st.erase(it)` erase only value at this iterator [how to get the iterator? using find]**
```cpp
vector<int>v = { 1,1,2,2,3,3,3,4 };
multiset<int>ms;
for (auto it : v) { ms.insert(it); }
ms.erase(1); // erase all ones
for (auto it : ms) { cout << it << " "; } // 2 2 3 3 3 4
cout << "\n";
```

**`st.erase(val)` erase all elements has this val [In case of multiset]**
```cpp
vector<int>v = { 1,1,2,2,3,3,3,4 };
multiset<int>ms;
for (auto it : v) { ms.insert(it); }
ms.erase(ms.find(2)); // erase the first 2
for (auto it : ms) { cout << it << " "; } // 1 1 2 3 3 3 4
cout << "\n";
```
**Erase min and max element**
```cpp
vector<int>v = { 1,2,5,4 };
set<int>st(v.begin(), v.end());
st.erase(st.begin()); // erase min element. set: 2 4 5
st.erase(prev(st.end())); // erase max element. set: 2 4
for (auto it : st) {
    cout << it << " ";
}
// 2 4
```
**Erase range**
```cpp
set<int>st;
vector<int>v = { 0,1,2,3,4,5,6,7,8 };
for (auto i : v) { st.insert(i); }
auto it1 = st.find(1), it2 = st.find(5);
st.erase(it1, it2); // erase form it1 to it2-1
for (auto it : st) { cout << it << " "; } //0 5 6 7 8
```

**Erase while iterating**
```cpp
// it is hard way and may take run time error so store values you want to erase in vector and erase them after set iteration loop
vector<int>v = { 1,1,2,2,3,3,3,4 };
multiset<int>ms;
for (auto it : v) { ms.insert(it); }
vector<int>vec;
for (auto it : ms) {
	if (it & 1) { vec.push_back(it); }
}
for (auto it : vec) { ms.erase(it); }
for (auto it : ms) { cout << it << " "; }
cout << "\n";
```

# `count`
**`st.count(val)`**
```cpp
vector<int>v = { 1,1,2,2,3,3,3,4 };
multiset<int>ms(v.begin(), v.end());
cout << ms.count(1); // 2
```

# `prev & next`
**used to increment and decrement iterators**
```cpp
vector<int>v = { 0,1,2 };
set<int>st(v.begin(), v.end());
cout << *prev(st.end()) << " ";  // 2
cout << *next(st.begin()); // 1
```

# `Update set`
**erase then insert updated item**
```cpp
vector<int>v = { 0,1,1,2 };
set<int>st(v.begin(),v.end());
// replace 1 with 5
auto it = st.find(1);
st.erase(it);
st.insert(5);
for (auto it : st) cout << it << " "; // 0 2 5

```

# `Lower & Upper bound`
```cpp
vector<int>v = { 0,1,2,3,4,5,6,7,8 };
set<int>st(v.begin(),v.end());
set<int>::iterator low, up;
low = st.lower_bound(1); // get iterator over 1
up = st.upper_bound(5);	 // get iterator over 6
cout << *low << " " << *up; // 1 6
```
