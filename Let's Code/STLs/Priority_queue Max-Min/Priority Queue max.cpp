#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void push_pop_top() {
	priority_queue<int>pq; 
	pq.push(4);
	pq.push(5);
	pq.push(6);
	cout << pq.top() << "\n"; // 6 
	pq.pop();
	cout << pq.top() << "\n"; // 5 
}
int main() {
	push_pop_top();
}