# Binary Search
![image](https://github.com/Abdelrhman-Sayed70/Competitive_Programming/assets/99830416/2eaa7c75-a6f8-49d9-bdfa-df9514fe87cd)

- **Used in `Monotonic search space` [ascendingly/descendingly] in O(Log(n))**
- **Used in optimization problems [max / min]**
  
## 

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
- Remember: array must be `SORTED`
- `Lower bound` return iterator iterates over first element >= val
- `Upper bound` return iterator iterates over first element > val
- if they does not give value in the array the iterator will point to v.end().
- **pay attention** accessing value of this iterator throw `run time error` so first check if the iterator doesn't point to `v.end()`

```cpp
vector<int>v = { 1,2,3,4,5 };
int val, index;

auto low = lower_bound(v.begin(), v.end(), 3); // low is iterator points to 3
val = *low; // 3
index = low - v.begin(); // 2

auto upper = upper_bound(v.begin(), v.end(), 3); // low is iterator points to 4
val = *upper; // 4
index = upper - v.begin(); // 3
cout << val << " " << index;
```

```cpp
vector<int>v = { 1,2,3,4,5 };
int val, index;
 
auto lower = lower_bound(v.begin(), v.end(), 6); // iterator points to v.end() at index 5
auto upper = upper_bound(v.begin(), v.end(), 5); // iterator points to v.end() at index 5

cout << "ok"; // will print ok
```

```cpp
vector<int>v = { 1,2,3,4,5 };
int val = -1, index = -1;
 
auto lower = lower_bound(v.begin(), v.end(), 6); // iterator points to v.end() at index 5
auto upper = upper_bound(v.begin(), v.end(), 5); // iterator points to v.end() at index 5

if (lower != v.end()) {
    val = *lower;
}
index = lower - v.begin();
cout << val << " " << index; // -1 5
```
