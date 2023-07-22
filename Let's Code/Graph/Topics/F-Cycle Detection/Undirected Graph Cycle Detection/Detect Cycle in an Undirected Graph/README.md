# Detect Cycle in an Undirected Graph
## [Detect Cycle in an Undirected Graph | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)
## Solution
```cpp
bool dfs(int node, vector<int> graph[], vector<int>&parent, vector<char>&color) {
      color[node] = 'g';
      for (auto child: graph[node]) {
          if (color[child] == 'w') {
              parent[child] = node;
              if (dfs(child, graph, parent, color)){
                  return true;
              }
          }
          else if (color[child] == 'g' and child != parent[node]) {
              return true;
          }
      }
      color[node] = 'b';
      return false;
  }
  bool isCycle(int n, vector<int> graph[]) {
      vector<char> color(n, 'w');
      vector<int> parent(n, -1);
      
      // scan for cycles
      bool cyclic = false;
      for(int node = 0; node < n; node++){
          if (color[node] == 'w'){
              if (dfs(node, graph, parent, color)) {
                  cyclic = true;
                  break;
              }
          }
      }
      return cyclic;
  }
```
