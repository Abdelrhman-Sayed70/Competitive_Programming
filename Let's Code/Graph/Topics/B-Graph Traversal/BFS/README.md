# BFS
**`Breadth First Search` Traverse the graph level by level**
## [BFS Toutorial | CS Academy](https://csacademy.com/lesson/breadth_first_search)

## Entering Graph
```cpp
int n, m; cin >> n >> m;
vector<vector<int>>graph(n + 1);
for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
}
```

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

# ☢ Generate the Path of the node
```cpp
vector<int>getPath(int node, vector<int>&predecessor){
    stack<int>st;
    while(node != -1){
        st.push(node);
        node = predecessor[node];
    }
    vector<int>path;
    while(st.size()){
        path.push_back(st.top());
        st.pop();
    }
    return path;
}
```
