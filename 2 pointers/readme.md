# 2 Pointers technique
![Capture](https://user-images.githubusercontent.com/99830416/182969646-cdedd473-a7df-4104-bdba-12c758806058.PNG)

First approach (iterative):
 ```cpp
 #include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	int n ,x,cnt= 0 ; 
	cin >> n >> x; 
	vector<int>v(n);
	for (auto& i : v) { cin >> i; }
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[i] + v[j] == x) { cnt++; }
		}
	}
	cout << cnt; 
}
 ```
 Second approach (binary search)
 ```cpp
 #include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	int n ,x,cnt= 0 ; 
	cin >> n >> x; 
	vector<int>v(n);
	for (auto& i : v) { cin >> i; }
	sort(v.begin(), v.end());
	for (int i = 0; i < n-1; i++) {
		int tmp = x - v[i]; 
		auto low = lower_bound(v.begin() + i + 1, v.end(), tmp)-v.begin();
		auto upper = upper_bound(v.begin() + i + 1, v.end(), tmp)-v.begin();
		cnt += upper - low; 
	}
	cout << cnt; 
}
 ```
