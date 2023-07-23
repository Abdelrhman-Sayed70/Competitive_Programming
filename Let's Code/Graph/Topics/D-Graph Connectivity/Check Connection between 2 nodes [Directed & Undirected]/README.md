# Check Connection between 2 nodes [Directed & Undirected]
## [Check Connection between 2 nodes | Leetcode](https://leetcode.com/problems/find-if-path-exists-in-graph/description/)

## Solution
```cpp
bool bfs(int source, int destination, vector<vector<int>>& graph, vector<int>&visited) {
    queue<int>nextToVisit;
    nextToVisit.push(source);
    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        if (current == destination)
            return true;

        visited[current] = 1;
        nextToVisit.pop();
        for (auto child : graph[current]) {
            if (!visited[child]) {
                nextToVisit.push(child), visited[child] = 1;
            }
        }
    }
    return false;
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
        graph[b].push_back(a); // undirected graph
    }
    int source, destination;
    cin >> source >> destination;
    cout << (bfs(source, destination, graph, visited) ? "Connected" : "Disconnected");
}
```
