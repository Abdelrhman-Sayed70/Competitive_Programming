# Entry Points
**For more than one entry point make sure to make them `visited` `before entering` dfs**

```cpp
cin >> k;
queue<pair<int, int>>q;
while (k--){
    int a, b;
    cin >> a >> b;
    q.push({a, b});
    visited[a][b] = 1; //  <-------------------
}
```
