# Maximum number of overlapping Intervals

## 1st version [1 2][2 3] overlapped [POPULAR]
```cpp
int maxOverlappingIntervals(vector<pair<int, int>>intervals) {
    // [1 2][2 3] overlapping
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
        (it.second == 'x' ? cnt++ : cnt--);
        mx = max(mx, cnt);
    }

    return mx;
}
void doIt() {
    int n; cin >> n;
    vector<pair<int, int>>v(n);
    for (auto& it : v)
        cin >> it.first >> it.second;

    int mx = maxOverlappingIntervals(v);
    cout << mx;
}
```

## 2nd version [1 2][2 3] not overlapped
```cpp
int maxOverlappingIntervals(vector<pair<int, int>>intervals) {
    // [1 2][2 3] not overlap
    int n = intervals.size();

    vector<pair<int, int>>v;
    for (int i = 0; i < n; i++) {
        int a = intervals[i].first, b = intervals[i].second;
        v.push_back({ a, 1 });
        v.push_back({ b, -1 });
    }

    sort(v.begin(), v.end());
    int mx = 1, cur = 0;
    for(auto it : v){
        cur += it.second;
        mx = max(mx, cur);
    }

    return mx;
}
void doIt() {
    int n; cin >> n;
    vector<pair<int, int>>v(n);
    for (auto& it : v)
        cin >> it.first >> it.second;

    int mx = maxOverlappingIntervals(v);
    cout << mx;
}
```
