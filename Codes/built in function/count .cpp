#include<bits/stdc++.h>
using namespace std;
#define ll long long

void count1() {
	string s = "abcnn";
	int n = count(s.begin(), s.end(), 'n');
	cout << n;
}
void count2() {
	vector<int>v = { 1,2,3,1,1 };
	int ones = count(v.begin(), v.end(), 1);
	cout << ones;
}
int main() {
	// count is function that count char in string or number in array in range (start ,end)
	// note that you can change your begin and end range 
	//											    0   1   2  3 
	// note end alwayes at position v.size()  v =   1 , 2 , 3 end here 
	count2();
}