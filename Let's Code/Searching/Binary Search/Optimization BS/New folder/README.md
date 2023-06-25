# March Rain
## [March Rain | Codeforces](https://codeforces.com/gym/101028/problem/I)

## Solution
```cpp
bool can(int mx, vector<int>& v, int k) {
    // greedy algo
    int blocks = 1;
    int last = v[0];
    for (int i = 1; i < v.size(); i++) {
        int cur = v[i] - last + 1;
        if (cur <= mx) {
            // ok
        }
        else {
            blocks++;
            last = v[i];
        }
    }
    return blocks <= k;
}
void doIt() { 
    int n, k;
    cin >> n >> k;
    vector<int>v(n);
    for (auto& it : v)
        cin >> it;

    int start = 1, end = 1e9 + 5, mid, ans;
    while (start <= end) {
        mid = (start + end) / 2;
        if (can(mid, v, k)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    cout << ans << "\n";
}
```