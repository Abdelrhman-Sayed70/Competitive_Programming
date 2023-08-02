#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() { 
    // Maximum number of overlapping Intervals --> (1 2)(2 3) not overlap based 
    int n; cin >> n;
    vector<pair<int, int>>vop;
    while (n--) {
        int a, b;
        cin >> a >> b;
        vop.push_back({ a,1 });
        vop.push_back({ b,-1 });
    }
    sort(vop.begin(), vop.end());
    int mx = 1;
    int cur = 0;
    for (int i = 0; i < vop.size(); i++) {
        cur += vop[i].second;
        mx = max(mx, cur);
    }
    cout << mx;
}
