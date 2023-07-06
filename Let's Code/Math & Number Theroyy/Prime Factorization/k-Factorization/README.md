# k-Factorization
## [k-Factorization | Codeforces](https://codeforces.com/problemset/problem/797/A)

## Approach
**Here we choose prime factorization not regular factorization as prime factorization gets more numbers that can be needed to fit k**

## Solution
```cpp
void doIt() {
    int n, k;
    cin >> n >> k;
    vector<int>v;
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            v.push_back(i);
            n /= i;
        }
    }
    if (n != 1)
        v.push_back(n);

    if (v.size() < k){
        cout << -1;
        return;
    }
    while(v.size() > k){
        int val = v[v.size() - 1] * v[v.size() - 2];
        v.pop_back();
        v.pop_back();
        v.push_back(val);
    }
    for(auto it : v)
        cout << it << " ";
}
```

## Another Solution
```cpp
void doIt() {
    int n, k;
    cin >> n >> k;
    vector<int>v;
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            v.push_back(i);
            n /= i;
        }
    }
    if (n != 1)
        v.push_back(n);

    if (v.size() < k){
        cout << -1;
        return;
    }
    for(int i = 0; i < k - 1; i++){
        cout << v[i] << " ";
    }
    int mul = 1;
    for(int i = k - 1; i < v.size(); i++){
        mul *= v[i];
    }
    cout << mul;
}
```
