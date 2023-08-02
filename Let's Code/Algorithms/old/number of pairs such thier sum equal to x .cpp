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