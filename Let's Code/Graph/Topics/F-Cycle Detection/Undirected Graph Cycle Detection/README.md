# `Undirected Graph Cycle Detection`
### [Detect cycle in an undirected graph | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)
# Approach 
- `DFS Approach` **To detect undirected graph cycle, we should mark any node we visit till now, if the current node is already visited and not its parent, then its cycle. We implement it using dfs**
- `BFS Approach` 

# DFS Approach 
```cpp
bool dfs(int node, vector<vector<int>>&graph, vector<int>&parent, vector<char>&color) {
    color[node] = 'g';
    for (auto child: graph[node]) {
        if (color[child] == 'w') {
            parent[child] = node;
            if (dfs(child, graph, parent, color)) {
                return true;
            }
        }
        else if (color[child] == 'g' and child != parent[node]) {
            return true;
        }
    }
    color[node] = 'b';
    return false;
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    vector<char> color(n, 'w');
    vector<int> parent(n, -1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // scan for cycles
    bool cyclic = false;
    for (int node = 0; node < n; node++) {
        if (color[node] == 'w') {
            if (dfs(node, graph, parent, color)) {
                cyclic = true;
                break;
            }
        }
    }
    if (cyclic) {
        cout << "Cyclic Graph\n";
    }
    else {
        cout << "No Cycles\n";
    }
}
```

# BFS Approach
```cpp

```
