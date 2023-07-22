# Round Trip II
## [Round Trip II | CSES](https://cses.fi/problemset/task/1678)

## Solution
```cpp
vector<int> getPath(int node, int endNode, vector<int>&parent) {
    vector<int> path;
    while (node != endNode) {
        path.push_back(node);
        node = parent[node];
    }
    path.push_back(endNode);
    path.push_back(path.front());
    reverse(all(path));
    return path;
}
vector<int>path;
bool dfs(int node, vector<vector<int>>&graph, vector<int>&parent, vector<char>&color) {
    color[node] = 'g';
    for (auto child: graph[node]) {
        if (color[child] == 'w') {
            parent[child] = node;
            if (dfs(child, graph, parent, color)) {
                return true;
            }
        }
        else if (color[child] == 'g') {
            path = getPath(node, child,parent);
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
    vector<char> color(n + 1, 'w');
    vector<int> parent(n + 1, -1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
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

    // answer
    if (cyclic) {
        //cout << "Cyclic Graph\n";
        cout << path.size() << "\n";
        for(auto it : path)
            cout << it << " ";
        cout << "\n";
    }
    else {
        cout << "IMPOSSIBLE";
        // cout << "No Cycles\n";
    }
}
```
