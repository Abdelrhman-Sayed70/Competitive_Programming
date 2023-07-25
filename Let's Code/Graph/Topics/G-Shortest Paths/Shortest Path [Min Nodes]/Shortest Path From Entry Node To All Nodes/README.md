# Shortest Path From Entry Node To All Nodes
## [Shortest Path From Entry Node To All Nodes | CS Academy](https://csacademy.com/lesson/breadth_first_search)

## 💭 Approach 
**BFS by nature get the shortest path from the entry node to all other nodes**

## Solution
```cpp
void bfs(int node, vector<vector<int>>& graph, vector<char>&color, vector<int>&level) {
    queue<int>nextToVisit;
    nextToVisit.push(node);
    level[node] = 0;
    color[node] = 'g';
    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        nextToVisit.pop();
        for (auto child : graph[current]) {
            if (color[child] == 'w') {
                nextToVisit.push(child);
                color[child] = 'g';
                level[child] = level[current] + 1;
            }
        }
        color[current] = 'b';
    }
}
void doIt() {
    int n, m, entry;
    cin >> n >> m >> entry;
    vector<vector<int>> graph(n + 1);
    vector<char>color(n + 1, 'w');
    vector<int>level(n + 1, -1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }
    bfs(entry, graph, color, level);

    for(int i = 1; i <= n; i++){
        cout << level[i] << " ";
    }
}
```
