# BFS
**`Breadth First Search` Traverse the graph level by level**
## [BFS Toutorial | CS Academy](https://csacademy.com/lesson/breadth_first_search)
# Traverse
```cpp
void bfs(int node, vector<vector<int>>& graph, vector<bool>&visited, vector<int>&parent, vector<int>&level) {
    queue<int>nextToVisit;
    nextToVisit.push(node);

    level[node] = 0;
    parent[node] = -1;

    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        cout << current << "\n";
        nextToVisit.pop();

        visited[current] = 1;
        for (auto child : graph[current]) {
            if (!visited[child]) {
                visited[child] = 1;
                parent[child] = current;
                level[child] = level[current] + 1;

                nextToVisit.push(child);
            }
        }
    }
}
```

# ☢ Traverse with Level, Parent & Color 
```cpp
void bfs(int node, vector<vector<int>>& graph, vector<char>&color, vector<int>&parent, vector<int>&level) {
    queue<int>nextToVisit;
    nextToVisit.push(node);
    parent[node] = -1;
    level[node] = 0;
    color[node] = 'g';
    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        cout << current << "\n" ;
        nextToVisit.pop();
        for (auto child : graph[current]) {
            if (color[child] == 'w') {
                nextToVisit.push(child);
                color[child] = 'g';
                level[child] = level[current] + 1;
                parent[child] = current;
            }
        }
        color[current] = 'b';
    }
}
void doIt() {
    int n, m; cin >> n >> m;
    vector<vector<int>>graph(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<char>color(n + 1);
    vector<int>parent(n + 1), level(n + 1);
    bfs(1, graph, color, parent, level);
}
```

# ☢ Generate Path of node
```cpp
vector<int> getPath(int node, vector<int>&parent) {
    vector<int>path;
    while (node != -1) {
        path.push_back(node);
        node = parent[node];
    }
    reverse(all(path));
    return path;
}
```
