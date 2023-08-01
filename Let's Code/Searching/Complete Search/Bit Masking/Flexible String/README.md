# Flexible String
## [Flexible String | Codeforces](https://codeforces.com/contest/1778/problem/C)

## Solution
```cpp
ll solve(vector<int>&mp, string a, string b){
    int n = a.size();
    for(int i = 0; i < n; i++){
        if (mp[a[i] - 'a'])
            a[i] = b[i];
    }
    ll cnt = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        if (a[i] == b[i])
            cnt++;
        else {
            ans += (cnt * (cnt + 1)) / 2;
            cnt = 0;
        }
    }
    ans += (cnt * (cnt + 1) / 2);
    return ans;
}
void doIt() {
    int n, k;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    set<char>st(a.begin(), a.end());
    vector<char>v(st.begin(), st.end());
    ll mx = 0;
    for(int i = 0; i < (1 << v.size()); i++){
        bitset<10>bit(i);
        vector<int>mp(30);
        if (bit.count() > k)
            continue;
 
        for(int j = 0; j < v.size(); j++){
            if (bit[j])
                mp[v[j] - 'a'] = 1;
        }
        mx = max(mx, solve(mp, a, b));
    }
    cout << mx << "\n";
}
```
