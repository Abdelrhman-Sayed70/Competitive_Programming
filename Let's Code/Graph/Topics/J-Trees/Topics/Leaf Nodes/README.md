# Tree Leaf Nodes
Nodes have no childs

```cpp
void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = 1;
    bool leafNode = 1;
    for (auto child : graph[node]) {
        if (!visited[child]) {
            leafNode = 0;
            dfs(child, graph, visited);
        }
    }
    if (leafNode)
        cout << node << " ";
}
void doIt() {
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

    // dfs from root
    dfs(1, graph, visited);
}
```
