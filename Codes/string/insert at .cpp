#include<bits/stdc++.h>
using namespace std;
#define ll long long
void insert_string_to_string() {
	string s;
	cin >> s;
	int pos;
	cin >> pos;
	string tmp = "hello";
	s.insert(pos, tmp);
	cout << s << " " << s.size();
}
void insert_char_to_string() {
	string s;
	cin >> s;
	int pos;
	cin >> pos;
	char ch = '.';
	s.insert(pos, 3, ch);	
	//	    pos , freq , char
	cout << s; 
}
int main() {
	insert_char_to_string();
}