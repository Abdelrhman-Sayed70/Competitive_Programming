# A - Frog 1
[A - Frog 1 | AtCoder](https://atcoder.jp/contests/dp/tasks/dp_a)

## Approach
- **We have 2 moves only** `i + 1` **and** `i + 2`.
- **Base case → i reach `n - 1` last tower. So the cost will be 0**
- **Statement → move to i + 1 and i + 2.**
- **invalid path here returns big number as it is minimization problem. in case of maximization problem, the invalid path value will be -1**

## Solution
```cpp
int solve(int i, vector<int>& v, vector<int>& dp) {
    if (i == v.size() - 1)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    int sol1 = INT_MAX, sol2 = INT_MAX;

    sol1 = abs(v[i] - v[i + 1]) + solve(i + 1, v, dp);

    if (i + 2 < v.size())
        sol2 = abs(v[i] - v[i + 2]) + solve(i + 2, v, dp);

    dp[i] = min(sol1, sol2);
    return dp[i];
}
void doIt(int tc) {
    int n;
    cin >> n;
    vector<int>v(n);
    for (auto& it : v)
        cin >> it;

    vector<int>dp(n + 1, -1);
    cout << solve(0, v, dp);
}
```

## Solution [more generic]
```cpp
ll solve(int i, int n, vector<int>& v, vector<int>&dp) {
    if (i == n - 1) { return 0; } 
    if (i >= n) { return 1e5; }

    if (dp[i] != -1) { return dp[i]; } // check dp

    ll ans1 = abs(v[i] - v[i + 1]) + solve(i + 1, n, v,dp);

    ll ans2 = abs(v[i] - v[i + 2]) + solve(i + 2, n, v, dp);

    dp[i] = min(ans1, ans2);
    return dp[i];
}
void doIt() {
    int n; cin >> n; 
    // store more memory in v. so that i can deal with +2 step
    vector<int>v(n + 2, 0), dp(n + 5, -1); 
    for (int i = 0; i < n; i++) { cin >> v[i]; }
    cout << solve(0, n, v, dp);
}
```
