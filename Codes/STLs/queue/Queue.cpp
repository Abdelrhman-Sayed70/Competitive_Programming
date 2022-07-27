#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
void push_pop_front() {
	queue<int>q; 
	q.push(1);
	q.push(2);
	q.push(3);
	// window :  1 2 3 
	q.pop();
	// window :  2 3
	cout << q.front() << "\n";
}
void traverse() {
	// access only on the front 
	queue<int>q; 
	q.push(1);
	q.push(2);
	q.push(3);
	while (q.size()) {
		cout << q.front() << " ";
		q.pop();
	}
}
int main() {
	 
		
}