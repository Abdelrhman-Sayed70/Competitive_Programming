# Task of Pairing

![WhatsApp Image 2023-09-11 at 02 59 50](https://github.com/Abdelrhman-Sayed70/Competitive_Programming/assets/99830416/02c102ec-0848-4079-9bb9-715c7eea28e2)

![WhatsApp Image 2023-09-11 at 03 00 13](https://github.com/Abdelrhman-Sayed70/Competitive_Programming/assets/99830416/1e3c7e18-3a3e-488a-9ccd-2f6946ed4288)


## Solution
```cpp
long solve(vector<long>&v){
    for(int i = 0; i < v.size(); i++){
        if (v[i] & 1){
            if (i + 1 < v.size() and v[i + 1]) {
                v[i]++;
                v[i + 1]--;
            }
        }
    }

    long ans = 0;
    for(auto it : v){
        ans += it / 2;
    }
    return ans;
}
void doIt(int tc) {
    int n;
    cin >> n;
    vector<long>v(n);
    for(auto &it : v)
        cin >> it;

    cout << solve(v);
}
```
