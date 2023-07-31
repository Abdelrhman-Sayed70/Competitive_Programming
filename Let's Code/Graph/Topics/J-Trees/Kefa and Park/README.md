# Kefa and Park
## [Kefa and Park | Codeforces](https://codeforces.com/contest/580/problem/C)

## Solution
```cpp
int ans = 0;
void dfs(int node, int m, vector<vector<int>>& graph, vector<bool>& visited, vector<bool>&isCat, int cntCats) {
    if (cntCats > m)
        return;

    visited[node] = 1;
    bool leafNode = 1;
    for (auto child : graph[node]) {
        if (!visited[child]) {
            leafNode = 0;
            int curCatsCnt = (!isCat[child] ? 0 : cntCats + 1);
            dfs(child, m, graph, visited, isCat, curCatsCnt);
        }
    }
    if (leafNode)
        ans++;
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<bool>isCat(n + 1);
    for (int i = 1; i <= n; i++) {
        bool in; cin >> in;
        isCat[i] = in;
    }

    vector<vector<int>>graph(n + 1);
    vector<bool>visited(n + 1, false);

    int edges = n - 1;
    for (int i = 0; i < edges; i++) {
        int a, b;
        cin >> a >> b;  
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1, m, graph, visited, isCat, isCat[1]);
    cout << ans;
}
```
