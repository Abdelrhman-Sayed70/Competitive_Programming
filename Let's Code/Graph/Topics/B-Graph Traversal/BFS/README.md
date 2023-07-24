# BFS
**`Breadth First Search` Traverse the graph level by level**
## [BFS Toutorial | CS Academy](https://csacademy.com/lesson/breadth_first_search)
# Traverse
```cpp
void bfs(int node, vector<vector<int>>& graph, vector<bool>&visited, vector<int>&parent, vector<int>&level) {
    queue<int>nextToVisit;
    nextToVisit.push(node);

    level[node] = 0;
    parent[node] = -1;

    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        cout << current << "\n";
        nextToVisit.pop();

        visited[current] = 1;
        for (auto child : graph[current]) {
            if (!visited[child]) {
                visited[child] = 1;
                parent[child] = current;
                level[child] = level[current] + 1;

                nextToVisit.push(child);
            }
        }
    }
}
``` 

# ☢ Generate Path of node
```cpp
vector<int> getPath(int node, vector<int>&parent) {
    vector<int>path;
    while (node != -1) {
        path.push_back(node);
        node = parent[node];
    }
    reverse(all(path));
    return path;
}
```
