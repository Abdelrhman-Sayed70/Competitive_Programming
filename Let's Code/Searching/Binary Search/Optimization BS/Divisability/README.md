# Divisability
## [Divisability | Codeforces](https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/I)

## Solution
```cpp
bool can(ll n, ll sum){
    ll s = n * (n + 1) / 2;
    return s <= sum;
}
void doIt(){
    ll sum, ans = -1;
    cin >> sum;
    ll start = 1, end = 1e10, mid;
    while(start <= end){
        mid = (start + end) / 2;
        if (can(mid, sum)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout << ans;
}
```
