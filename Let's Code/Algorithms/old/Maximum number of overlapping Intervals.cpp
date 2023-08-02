#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() { 
	// Maximum number of overlapping Intervals --> (1 2)(2 3) overlap based 
    int n; cin >> n;
    vector<pair<int, char>>v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({ a, 'x' });
        v.push_back({ b,'y' });
    }
    sort(v.begin(), v.end());  // for equal numbers x became first
    int cnt = 0, mx = 1;
    for (auto it : v) {
        if (it.second == 'x') { cnt++; }
        else { cnt--; }
        mx = max(mx, cnt);
    }
    cout << mx;
}