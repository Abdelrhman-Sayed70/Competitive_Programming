

## Solution
```cpp
void dijkstra(int node, vector<vector<pair<int, ll>>>&graph, vector<bool>&visited, vector<ll>&cost){
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
                //predecessor[target] = source;
                pq.push({-cost[target], target});
            }
        }
    }
}
void doIt() {
    int n, m, q;
    cin >> n >> m >> q;
 
    vector<vector<pair<int, ll>>>graph(n + 1); // endNode, cost
 
    for (int i = 0; i < m; i++) {
        int startNode, endNode, pathCost;
        cin >> startNode >> endNode >> pathCost;
        graph[startNode].push_back({endNode, pathCost});
        graph[endNode].push_back({startNode, pathCost});
    }
 
    unordered_map<int, vector<ll>>mp;
    for(int i = 1; i <= n; i++){
        vector<bool>visited(n + 1, false);
        vector<ll>cost(n + 1, LONG_LONG_MAX);
        //vector<int>predecessor(n + 1, -1);
        //dijkstra(i, graph, visited, cost, predecessor);
        dijkstra(i, graph, visited, cost);
        mp[i] = cost;
    }
 
    while(q--){
        int a, b;
        cin >> a >> b;
        vector<ll>curCost = mp[a];
        cout << (curCost[b] != LONG_LONG_MAX ? curCost[b] : -1);
        cout << "\n";
    }
}
```
