# `Template`
```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(),v.end()
void Go() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
void doIt(int tc) {

}
int main() {
    Go();
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
        doIt(tc);
}
```

## `Prefix Sum`

- Gets sum from the start of the array to the position I

```c++
vector<ll>getPrefix(vector<ll>&v) {
    vector<ll> prefix = v;
    for (int i = 1; i < prefix.size(); i++) {
        prefix[i] += prefix[i - 1];
    }
    return prefix;
}
```
```cpp
int a, b; // 0 based
cin >> a >> b;
cout << (a ? prefix[b] - prefix[a - 1] : prefix[b]);
```

## `Suffix Sum`

- Gets sum from the end of the array to position I

```c++
vector<ll>getSuffix(vector<ll>&v) {
    vector<ll> suffix = v;
    for (int i = v.size() - 2; i >= 0; i--) {
        suffix[i] += suffix[i + 1];
    }
    return suffix;
}
```

## `2D Prefix Sum`
```cpp


```



## `Partial [Ranged] sum`

```cpp
void doIt() {
    int n; cin >> n;
    vector<int>v(n), ranged(n + 1, 0);
    for (auto& it : v)
        cin >> it;

    int q;
    cin >> q;
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        l--, r--;
        ranged[l] += k;
        ranged[r + 1] -= k;
    }
    for (int i = 1; i < n; i++) {
        ranged[i] += ranged[i - 1];
    }
    for (int i = 0; i < n; i++) {
        v[i] += ranged[i];
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}
```

## `Binary Search`
```cpp
void doIt() {
    vector<int>v = { 1,2,3,4,5 };
    sort(v.begin(), v.end()); // array must be sorted
    int start = 0, end = v.size() - 1, mid;
    int goal = 6;
    bool found = false;
    while (start <= end) {
        mid = (start + end) / 2;
        if (v[mid] > goal) {
            end = mid - 1;
        }
        else if (v[mid] < goal) {
            start = mid + 1;
        }
        else if (v[mid] == goal) {    
            found = true; 
            break;
        }
    }
    cout << (found ? "Yes" : "No");
}
```
```cpp
vector<int>v = { 1,2,3,4,5 };
int val, index;

auto low = lower_bound(v.begin(), v.end(), 3); // low is iterator points to 3
if (low != v.end()){
    val = *low; // 3
    index = low - v.begin(); // 2
}

auto upper = upper_bound(v.begin(), v.end(), 3); // low is iterator points to 4
if (upper != v.end()){
    val = *upper; // 4
    index = upper - v.begin(); // 3
}

cout << val << " " << index;
```
