# Stack
`LIFO: Last In First Out`
# `push`
```cpp
stack<int>st;
st.push(3);
st.push(2);
st.push(1);
```
`stack content`
```
1
2
3
```

# `pop & top`
```cpp
stack<int>st;
st.push(3);
st.push(2);
st.push(1);
st.pop();
cout << st.top(); // 2
```

# `Print stack`
```cpp
stack<int>st;
st.push(3);
st.push(2);
st.push(1);
while (!st.empty()) {
    cout << st.top() << "\n";
    st.pop();
}
```
`output`
```
1
2
3
```
