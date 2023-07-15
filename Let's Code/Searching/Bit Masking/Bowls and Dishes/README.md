# Bowls and Dishes
## [Bowls and Dishes | AtCoder](https://atcoder.jp/contests/abc190/tasks/abc190_c)

## Solution
```cpp
bool getBit(int num, int index){
    return (1 << index) & num;
}
int solve(vector<int>&v, vector<pair<int,int>>&bowels){
    int cnt = 0;
    for(auto it: bowels){
        cnt += v[it.first] and v[it.second];
    }
    return cnt;
}
void doIt() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> bowels(m);
    for (int i = 0; i < m and cin >> bowels[i].first >> bowels[i].second; i++);
    int k;
    cin >> k;
    vector<pair<int, int>> person(k);
    for (auto &it: person)
        cin >> it.first >> it.second;

    // bitmask on k persons
    int mx = 0;
    for(int i = 0; i < (1 << k); i++){
        vector<int>v(n + 1);
        for(int j = 0; j < k ;j++){
            int bit = getBit(i, j);
            if (bit)
                v[person[j].first] = 1;
            else
                v[person[j].second] = 1;
        }
        mx = max(mx, solve(v, bowels));
    }
    cout << mx;
}
```
