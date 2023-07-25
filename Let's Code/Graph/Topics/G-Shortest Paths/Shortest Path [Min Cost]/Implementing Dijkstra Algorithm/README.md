# Implementing Dijkstra Algorithm
## [Implementing Dijkstra Algorithm | Geeks For Geeks](https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

## Solution
```cpp
vector<int> myDijkstra(int node, vector<vector<pair<int, int>>>&graph, vector<bool>&visited, vector<int>&cost, vector<int>&predecessor){
    int n = graph.size();

    // cost of source node
    cost[node] = 0;

    // priority_queue hold node and its best cost [cost, node]. it should sort [ascendingly] from min to max
    priority_queue<pair<int, int>>pq;
    pq.push({cost[node], node});

    while(pq.size()){
        int source = pq.top().second;
        int sourceCost = -pq.top().first;
        pq.pop();
        if (visited[source])
            continue;

        visited[source] = 1;
        for(auto it : graph[source]){
            int target = it.first;
            int edgeCost = it.second;
            if (sourceCost + edgeCost < cost[target]){
                // it is min cost than old cost
                cost[target] = sourceCost + edgeCost;
                predecessor[target] = source;
                pq.push({-cost[target], target});
            }
        }
    }
    return cost;
}

vector <int> dijkstra(int n, vector<vector<int>> adj[], int S)
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
    
    return myDijkstra(S, graph, visited, cost, predecessor);
}
```
