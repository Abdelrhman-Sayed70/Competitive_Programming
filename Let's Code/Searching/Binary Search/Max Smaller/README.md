# Max Smaller
## Description
given array a and integer target return max index with value <= target

## Testcases
```
3
10 20 30
30
Found at index: 2 with value: 30

3
10 20 30
17
Found at index: 0 with value: 10

3
10 20 30
5
Not found

4
2 2 2 5
4
Found at index: 2 with value: 2
```

## Solution
```cpp
void doIt() { 
    int n;
    cin >> n; 
    vector<int>v(n);
    for (auto& it : v)
        cin >> it;

    int target; 
    cin >> target;
    auto it = upper_bound(all(v), target);
    int index = it - v.begin();
    index--;
    if (index < 0) {
        cout << "Not found\n";
    }
    else {
        cout << "Found at index: " << index << " with value: " << v[index] << "\n";
    }
}
```
