#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void next_prev_Permutaion1() {
	// if you want to obtain all permutation of container sort it first. but you can use function without sort if you want to get the next of prev permutation
	vector<int>v = { 1,2,3 };
	sort(v.begin(), v.end());
	do {
		for (auto i : v) { cout << i << " "; }
		cout << "\n";
	} while (next_permutation(v.begin(), v.end()));
	// next permutation return bool 1 when there is some permutations and 0 when there is no other permutation
}
void next_prev_Permutaion2() {
	string s = "abc";
	next_permutation(s.begin(), s.end());
	cout << s; // acb
}
void next_prev_Permutaion3() {
	string s = "abc";
	bool b = next_permutation(s.begin(), s.end());
	if (b) { cout << "there is permutation : " << s; }
	else { cout << "no another permutation"; }
}
void next_prev_Permutaion3(){
	vector<int>v = { 3,2,1 };
	bool b = next_permutation(v.begin(),v.end());
	cout << b; // return 0 as there is no permute after this permutation
}
int main() { 

}
