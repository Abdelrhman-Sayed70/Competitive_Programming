#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
void push_pop_top() {
	stack<int>st; 
	st.push(3);			
	st.push(2);
	st.push(1);
	/*
		1
		2
		3
	*/
	st.pop(); 
	/*
		2
		3
	*/
	while (st.size()) {
		cout << st.top() <<"\n";
		st.pop();
	}
}
int main() {
	 
		
}