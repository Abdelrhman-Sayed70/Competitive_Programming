#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
void push_pop() {
	deque<int>dq; 
	for (int i = 1; i <= 5; i++) {
		if (i % 2 == 0) {
			dq.push_front(i);
		}
		else {
			dq.push_back(i);
		}
	}
	for (int i = 0; i < dq.size(); i++) {
		cout << dq[i] << " ";
	}
}
int main() {
	 
	push_pop();
}