# Minimum Moves to Equal Array Elements II
## [Minimum Moves to Equal Array Elements II | Leetcode](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/)

## Soluution
**Make all elements equal to `median` after sorting the median is the middle value in the array**

```cpp
int minMoves2(vector<int>& v) {
    int n = v.size();
    sort(all(v));
    int ans = 0;
    for(auto it : v){
        ans += abs(v[n/2] - it);
    }
    return ans;
}
```
