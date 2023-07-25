# `Shortest Path [Min Cost]`
- **It can be implemented using `Dijstra`**
- From a single source it gets the min cost to reach all nodes in a graph

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
void dijkstra(int node, vector<vector<pair<int, ll>>>&graph, vector<bool>&visited, vector<ll>&cost, vector<int>&predecessor){
    int n = graph.size();

    // cost of source node
    cost[node] = 0;

    // priority_queue hold node and its best cost [cost, node]. it should sort [ascendingly] from min to max
    priority_queue<pair<ll, int>>pq;
    pq.push({cost[node], node});

    while(pq.size()){
        int source = pq.top().second;
        ll sourceCost = -pq.top().first;
        pq.pop();
        if (visited[source])
            continue;

        visited[source] = 1;
        for(auto it : graph[source]){
            int target = it.first;
            ll edgeCost = it.second;
            if (sourceCost + edgeCost < cost[target]){
                // it is min cost than old cost
                cost[target] = sourceCost + edgeCost;
                predecessor[target] = source;
                pq.push({-cost[target], target});
            }
        }
    }
}
void doIt() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, ll>>>graph(n + 1); // endNode, cost
    vector<bool>visited(n + 1, false);
    vector<ll>cost(n + 1, LONG_LONG_MAX);
    vector<int>predecessor(n + 1, -1);

    for (int i = 0; i < m; i++) {
        int startNode, endNode, pathCost;
        cin >> startNode >> endNode >> pathCost;
        graph[startNode].push_back({endNode, pathCost});
    }

    dijkstra(1, graph, visited, cost, predecessor);
    for(int i = 1; i <= n; i++){
        cout << cost[i] << " ";
    }
}
```
