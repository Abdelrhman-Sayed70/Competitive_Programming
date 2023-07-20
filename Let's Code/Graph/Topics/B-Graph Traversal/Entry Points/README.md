## More Than 1 Entry Point
**`Visit those points` `before` `entering traversal algorithm`**
```cpp
int numOfEntryPoints;
queue<pair<int, int>>q;
while (numOfEntryPoints--){
    int a, b;
    cin >> a >> b;
    q.push({a, b});
    visited[a][b] = 1; //  <-------------------
}
bfs(q, {n, m});
```
