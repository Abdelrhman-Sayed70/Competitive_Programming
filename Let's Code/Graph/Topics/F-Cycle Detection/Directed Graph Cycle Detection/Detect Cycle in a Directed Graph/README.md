# Detect Cycle in a Directed Graph
## [Detect Cycle in a Directed Graph | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1)

## Solution
```cpp
bool dfs(int node, vector<int> graph[], vector<int>&parent, vector<char>&color) {
    color[node] = 'g';
    for (auto child: graph[node]) {
        if (color[child] == 'w') {
            parent[child] = node;
            if (dfs(child, graph, parent, color)) {
                return true;
            }
        }
        else if (color[child] == 'g') {
            return true;
        }
    }
    color[node] = 'b';
    return false;
}
bool isCyclic(int n, vector<int> graph[]) {
    vector<char> color(n + 1, 'w');
    vector<int> parent(n + 1, -1);
    bool cyclic = false;
    for (int node = 0; node < n; node++) {
        if (color[node] == 'w') {
            if (dfs(node, graph, parent, color)) {
                cyclic = true;
                break;
            }
        }
    }
    return cyclic;
}
```
