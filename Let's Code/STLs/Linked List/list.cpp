#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void declare_fill() {
	list<int>ls; 
	int n; cin >> n; 
	for (int i = 0; i < n; i++) {
		int in; cin >> in; 
		ls.push_back(in);
	}
}
void traverse_from_left_to_right() {
	list<int>ls;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int in; cin >> in;
		ls.push_back(in);
	}
	cout << "List contains : \n";
	list<int>::iterator it = ls.begin();
	for (it; it != ls.end(); it++) {
		cout << *it << " ";
	}
}
void traverse_from_right_to_left() {
	list<int>ls;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int in; cin >> in;
		ls.push_back(in);
	}
	list<int>::reverse_iterator it = ls.rbegin(); 
	for (it; it != ls.rend(); it++) {
		cout << *it << " ";
	}
}
void erase() {
	// ls.erase(itrator) -> erase one element 
	// ls.remove(val) -> erase all val in ls 
	// ls.erase(it1,it2) -> erase values between those iterators 
}
void front_back() {
	list<int>ls;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int in; cin >> in;
		ls.push_back(in);
	}
	cout << "front of list : " << ls.front() << "\n";
	cout << "back of list : " << ls.back() << "\n";
}
void push_front() {
	list<int>ls;
	ls.push_front(10);
	ls.push_front(20); 
	for (auto it : ls) { cout << it << " "; }
}
void popFront_popBack() {
	list<int>ls;
	ls.push_front(10);
	ls.push_front(20);
	ls.pop_back();
	ls.pop_front();
	cout << ls.size();
}
void begin_end_rbegin_rend() {
	list<int>ls;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int in; cin >> in;
		ls.push_back(in);
	}
	auto itbegin = ls.begin(), itend = prev(ls.end());
	auto itrbegin = ls.rbegin(), itrend = prev(ls.rend());
	cout << "begin value " << *itbegin << "\n";
	cout << "end value " << *itend << "\n";
	cout << "rbegin value " << *itrbegin << "\n";
	cout << "rend value " << *itrend << "\n";
}
void sort() {
	// complexity : O(n log n )  
	list<int>ls;
	int n; cin >> n;
	for (int i = 0; i < n; i++) { int in; cin >> in;  ls.push_back(in); } 
	ls.sort();
	for (auto it : ls) { cout << it << " ";  } 
	cout << "\n"; 
}
int main() { 

}