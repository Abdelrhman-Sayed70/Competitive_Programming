# BFS
**`Breadth First Search` Traverse the graph level by level**
## [BFS Toutorial | CS Academy](https://csacademy.com/lesson/breadth_first_search)
# Traverse
```cpp
void bfs(int node, vector<vector<int>>& graph, vector<int>&visited, vector<int>&parent) {
    queue<int>nextToVisit;
    nextToVisit.push(node);
    parent[node] = -1;
    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        cout << current << "\n";
        visited[current] = 1;
        nextToVisit.pop();
        for (auto child : graph[current]) {
            if (!visited[child]) {
                visited[child] = 1;
                parent[child] = current;
                nextToVisit.push(child);
            }
        }
    }
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>>graph(n + 1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int>visited(n + 1, 0), parent(n + 1);
    bfs(1, graph, visited, parent);
}
```

# ☢ Traverse with Level, Parent & Color 
```cpp
vector<char>color(100, 'w');
vector<int>level(100), parent(100);
void bfs(int node, vector<vector<int>>& graph) {
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
    int vertices, edges; cin >> vertices >> edges;
    vector<vector<int>>graph(vertices + 1);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);  
    }
    for (int i = 1; i <= vertices; i++) {
        if (color[i] == 'w')
            bfs(i, graph);
    }
}
```

# ☢ Generate Path of any node
```cpp
vector<char>color(100, 'w');
vector<int>level(100), parent(100);
vector<int> getPath(int node) {
    vector<int>path;
    while (node != -1) {
        path.push_back(node);
        node = parent[node];
    }
    reverse(all(path));
    return path;
}
void bfs(int node, vector<vector<int>>& graph) {
    queue<int>nextToVisit;
    nextToVisit.push(node);
    parent[node] = -1;
    level[node] = 0;
    color[node] = 'g';
    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        cout << current << "\n";
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
    int vertices, edges; cin >> vertices >> edges;
    vector<vector<int>>graph(vertices + 1);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 1; i <= vertices; i++) {
        if (color[i] == 'w')
            bfs(i, graph);
    }
    while (true) {
        cout << "Enter node you want to get its path: ";
        int node; cin >> node;
        cout << "Path: ";
        vector<int>path = getPath(node);
        for (auto it : path) { cout << it << " "; }
        cout << "\n";
    }
}
```
