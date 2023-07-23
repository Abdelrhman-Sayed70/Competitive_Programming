# Graph Connectivity
## [Graph Connectivity | VJ](https://vjudge.net/contest/552892#problem/A)
## [Graph Connectivity | EOlymp](https://www.eolymp.com/en/problems/982)

## Solution
```cpp
int dfs(int node, vector<vector<int>>&graph, vector<int>&visited) {
    visited[node] = 1;
    int cnt = 1;
    for (auto child : graph[node]) {
        if (!visited[child]) {
            cnt += dfs(child, graph, visited);
        }
    }
    return cnt;
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    vector<int> visited(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    cout << (n == dfs(1, graph, visited) ? "YES" : "NO");
}
```
