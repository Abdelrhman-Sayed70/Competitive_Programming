#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void priority_queue_min() {
	priority_queue<int, vector<int>, greater<int>> pq2;
	int n; cin >> n; 
	while (n--) {
		int in; cin >> in;
		pq2.push(in);
	}
	while (pq2.size()) {
		cout << pq2.top() << " ";
		pq2.pop();
	}
}
int main() {
	priority_queue_min();
}