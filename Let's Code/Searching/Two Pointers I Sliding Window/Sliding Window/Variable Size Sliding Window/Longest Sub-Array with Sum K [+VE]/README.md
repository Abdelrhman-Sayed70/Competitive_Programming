# Longest Sub-Array with Sum K [+VE]
## [Longest Sub-Array with Sum K [+VE] | Coding Ninjas](https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems)

## Testcase
```
8 6
0 0 1 2 3 0 1 0
out: 6 [0 - 5]
```

## Approach
- set start and end pointers on position 0
- keep summing and check if the sum = k then update the answer
- if the sum > k. subtract from sum value a[start] and move start while sum > k
- after breaking the while loop of subtracting, check if the sum became equal k and update the answer
- 

## Solution
```cpp
void doIt() { 
    int n;
    cin >> n; 
    vector<int>v(n);
    for (auto& it : v)
        cin >> it;

    int k; 
    cin >> k;
    
    int start = 0, end = 0, mx = 0;
    ll sum = 0;
    while (end < n) {
        sum += v[end];
        if (sum == k) 
            mx = max(mx, end - start + 1);

        if (sum > k) {
            while (sum > k) {
                sum -= v[start];
                start++;
            }

            if (sum == k) 
                mx = max(mx, end - start + 1);
        }
        end++;
    }
    cout << mx;
}
```
