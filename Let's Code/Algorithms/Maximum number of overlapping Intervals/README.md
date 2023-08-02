# Maximum number of overlapping Intervals

## 1st Version [1 2][2 3] not overlapped
```cpp
int maxOverlappingIntervals(vector<pair<int, int>>intervals) {
    int n = intervals.size();

    vector<pair<int, char>>v;
    for (int i = 0; i < n; i++) {
        int a = intervals[i].first, b = intervals[i].second;
        v.push_back({ a, 'x' });
        v.push_back({ b, 'y' });
    }
    sort(v.begin(), v.end());  // for equal numbers x became first
    int cnt = 0, mx = 1;
    for (auto it : v) {
        it.second == 'x' ? cnt++ : cnt--;
        mx = max(mx, cnt);
    }

    return mx;
}
void doIt() {
    int n; cin >> n;
    vector<pair<int, char>>v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({ a, 'x' });
        v.push_back({ b, 'y' });
    }

    sort(v.begin(), v.end());  // for equal numbers x became first
    int cnt = 0, mx = 1;
    for (auto it : v) {
        it.second == 'x' ? cnt++ : cnt--;
        mx = max(mx, cnt);
    }
    cout << mx;
}
```
