# Trees

## Entering Tree
```cpp
int n;
cin >> n;

vector<vector<int>>graph(n + 1);
vector<bool>visited(n + 1, false);

int edges = n - 1;
for (int i = 0; i < edges; i++) {
    int a, b;
    cin >> a >> b;  
    graph[a].push_back(b);
    graph[b].push_back(a);
}
```
