# Graph Representation
# Materials
### [Graph Representation | CS Academy](https://csacademy.com/lesson/graph_representation)

# Input & Basic Output Graph  
```cpp
int n, m;
cin >> n >> m;
vector<vector<int>> graph(n + 1);
for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
}
for(int i = 1; i <= n; i++){
    cout << i << "\n";
    for(auto child : graph[i]){
        cout << child << " ";
    }
    cout << "\n";
} 
```
