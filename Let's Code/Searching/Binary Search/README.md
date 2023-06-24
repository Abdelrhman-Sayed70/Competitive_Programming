# Binary Search
**`Used in Monotonic search space [ascendingly/descendingly] in O(Log(n))`**
![image](https://github.com/Abdelrhman-Sayed70/Competitive_Programming/assets/99830416/2eaa7c75-a6f8-49d9-bdfa-df9514fe87cd)

## `Implementation`
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

## `Lower & Upper bound`
```cpp

```
