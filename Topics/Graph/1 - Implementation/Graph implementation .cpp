#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool matrix[100][100];
void Graph_adj_list() {
	int nodes, edges;
	cin >> nodes >> edges;
	vector<vector<int>>arr(nodes+1);
	for (int i = 0; i < edges; i++) {
		int x, y; cin >> x >> y;  

		arr[x].push_back(y); 
		arr[y].push_back(x);
	}
	cout << "AdjList :\n"; 
	for (int i = 0; i < arr.size(); i++) {		 
		cout << i << " : " << "{";
		for (int j = 0; j < arr[i].size() ; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "}\n";
	}
}
void Graph_adj_matrix() {
	int nodes, edges; 
	cin >> nodes >> edges;
	for (int i = 0; i < edges; i++) {
		int x, y; cin >> x >> y;
		x--; y--;
		matrix[x][y] = 1;
		matrix[y][x] = 1;
	}
	cout << "adjMatrix :\n";
	for (int i = 0; i < nodes; i++) {
		for (int j = 0; j < nodes; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}
int main() {
	Graph_adj_matrix();
}