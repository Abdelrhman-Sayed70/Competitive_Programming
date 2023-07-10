# IQ Test
## [IQ Test | Codeforces](https://codeforces.com/contest/328/problem/A)

## Solution
```cpp
void doIt() {
    vector<float>v(4);
    for(auto &it:v){
        cin >> it;
    }

    set<float>arithmetic, geometric;
    for(int i = 1; i < 4; i++){
        arithmetic.insert(v[i] - v[i-1]);
        geometric.insert(v[i] / v[i - 1]);
    }

    // arithmetic checking
    if (arithmetic.size() == 1){
        cout << v.back() + *arithmetic.begin();
        return;
    }

    // geometric checking
    if (geometric.size() == 1){
        float ans = v.back() * (*geometric.begin());
        if (ans == int(ans)){
            cout << ans;
            return;
        }
    }

    // not arithmetic nor geometric
    cout << 42;
}
```
