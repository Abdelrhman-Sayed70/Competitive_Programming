# Compare Function

```cpp
bool preceed(int a, int b) {
    return a > b;
}
void doIt() {
    int n; cin >> n; 
    vector<int>v = { 1,3,2 };
    for (auto& it : v)
        cin >> it;
    sort(all(v), preceed);
    out(v);
    // 3 2 1
}
```
