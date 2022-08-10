#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void Graph_adj_list() {
	// Read Graph 

	int n; cin >> n;  // number of nodes 
	int m; cin >> m;  // number of edges
	vector<vector<pair<int, int>>>adj_list(n); // target node & price
	// u -> v with price c  
	while (m--) {
		int u, v, c;
		cin >> u >> v >> c;
		adj_list[u].push_back({ v,c });
	}

	// Traverse Graph 
	for (int i = 0; i < adj_list.size(); i++) {
		vector<pair<int, int>>vop = adj_list[i];
		for (int j = 0; j < vop.size(); j++) {
			cout << vop[j].first << " " << vop[j].second << " , ";
		}
		cout << "\n";
	}
}

int main() {
	Graph_adj_list();
}