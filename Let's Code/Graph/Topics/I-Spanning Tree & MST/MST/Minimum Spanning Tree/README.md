# Minimum Spanning Tree
## [Minimum Spanning Tree | Geeks For Geeks](https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

## Solution
```cpp
int MST(int node, vector<vector<pair<int, int>>>& graph, vector<bool>& visited, vector<int>& cost, vector<int>& predecessor) {
    int MSTCost = 0;
    int n = graph.size();
    
    cost[node] = 0;
    
    priority_queue<pair<int, int>>pq; 
    pq.push({ cost[node], node });

    while (pq.size()) {
        int source = pq.top().second;
        int sourceCost = -pq.top().first;
        pq.pop();
        if (visited[source])
            continue;

        visited[source] = 1;
        MSTCost += sourceCost;
        for (auto it : graph[source]) {
            int target = it.first;
            int edgeCost = it.second;

            if (edgeCost < cost[target]) {
                cost[target] = edgeCost;
                predecessor[target] = source;
                pq.push({ -cost[target], target });
            }

        }
    }
    return MSTCost;
}
int spanningTree(int n, vector<vector<int>> adj[])
{
    vector<vector<pair<int, int>>>graph(n); // endNode, cost
    vector<bool>visited(n, false);
    vector<int>cost(n, INT_MAX);
    vector<int>predecessor(n, -1);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < adj[i].size(); j++) {
            int endNode = adj[i][j][0];
            int weight = adj[i][j][1];
            graph[i].push_back({endNode, weight});
        }
    }
    
    int MSTCost = MST(0, graph, visited, cost, predecessor);
    return MSTCost;
}
```
