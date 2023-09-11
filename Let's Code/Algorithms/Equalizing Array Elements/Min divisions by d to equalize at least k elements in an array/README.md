# Min divisions by d to equalize at least k elements in an array
![WhatsApp Image 2023-09-11 at 02 58 21](https://github.com/Abdelrhman-Sayed70/Competitive_Programming/assets/99830416/70f1c117-f818-4bc6-b9a4-0a644dc8a735)
![WhatsApp Image 2023-09-11 at 02 58 42](https://github.com/Abdelrhman-Sayed70/Competitive_Programming/assets/99830416/450040a8-d7ca-40d4-b626-44f08b1f57b2)
![WhatsApp Image 2023-09-11 at 02 59 01](https://github.com/Abdelrhman-Sayed70/Competitive_Programming/assets/99830416/d6603d42-69d2-4dd4-9a8a-adf5f2ba6490)

## Solution
```cpp
int solve(vector<int>&v, int count, int d){
    sort(all(v));
    map<int, ll>mp, cost;
    map<pair<int, int>, int>steps;
    ll ans = 1e15;
    for(int i = 0; i < v.size(); i++){
        int it = v[i];
        int cnt = 0;
        while(true){
            mp[it]++;
            cost[it] += cnt;

            if (mp[it] == count){
                ans = min(ans, cost[it]);
            }

            if (!it)
                break;

            it /= d;
            cnt++;
        }
    }

    return ans;
}
void doIt(int tc) {
    int n, cnt, d;
    cin >> n;
    vector<int>v(n);
    for(auto &it : v)
        cin >> it;

    cin >> cnt >> d;
    cout << solve(v, cnt, d);
}
```
