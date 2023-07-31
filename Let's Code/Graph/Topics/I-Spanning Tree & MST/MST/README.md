# MST

## Algorithm

## MST Implementation
```cpp
ll MST(int node, vector<vector<pair<int, ll>>>& graph, vector<bool>& visited, vector<ll>& cost, vector<int>& predecessor) {
    ll MSTCost = 0;
    int n = graph.size();
    
    cost[node] = 0;
    
    priority_queue<pair<ll, int>>pq; 
    pq.push({ cost[node], node });

    while (pq.size()) {
        int source = pq.top().second;
        ll sourceCost = -pq.top().first;
        pq.pop();
        if (visited[source])
            continue;

        visited[source] = 1;
        MSTCost += sourceCost;
        for (auto it : graph[source]) {
            int target = it.first;
            ll edgeCost = it.second;

            if (edgeCost < cost[target]) {
                cost[target] = edgeCost;
                predecessor[target] = source;
                pq.push({ -cost[target], target });
            }

        }
    }
    return MSTCost;
}
void doIt() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, ll>>>graph(n + 1); // endNode, cost
    vector<bool>visited(n + 1, false);
    vector<ll>cost(n + 1, LLONG_MAX);
    vector<int>predecessor(n + 1, -1);

    for (int i = 0; i < m; i++) {
        int startNode, endNode, pathCost;
        cin >> startNode >> endNode >> pathCost;
        graph[startNode].push_back({ endNode, pathCost });
        graph[endNode].push_back({ startNode, pathCost });
    }

    ll MSTCost = MST(0, graph, visited, cost, predecessor);

    for (int i = 0; i < n; i++) {
        cout << "node " << i << " ,cost: " << cost[i] << ", predecessor: " << predecessor[i] << "\n";
    }
    cout << "MST Cost: " << MSTCost << "\n";
}
```
