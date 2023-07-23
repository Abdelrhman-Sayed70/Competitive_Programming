# Building Roads
## [Building Roads | CSES](https://cses.fi/problemset/task/1669)

## Solution
```cpp
void dfs(int node, vector<vector<int>>&graph, vector<int>&visited) {
    visited[node] = 1;
    for (auto child : graph[node]) {
        if (!visited[child])
            dfs(child, graph, visited);
    }
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>>graph(n + 1);
    vector<int>visited(n + 1, 0);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int>cities;
    for(int i = 1; i <= n; i++){
        if (!visited[i]){
            cities.push_back(i);
            dfs(i, graph, visited);
        }
    }
    cout << cities.size() - 1 << "\n";
    for(int i = 0; i < cities.size() - 1; i++){
        cout << cities[i] << " " << cities[i + 1] << "\n";
    }
}
```
