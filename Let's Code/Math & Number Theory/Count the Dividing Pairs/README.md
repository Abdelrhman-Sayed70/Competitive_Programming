# Count the Dividing Pairs
## [Count the Dividing Pairs | Codeforces](https://codeforces.com/gym/102317/problem/H)

## Solution
```cpp
const int N = 1e7 + 5;
vector<int>freq(N);
void doIt(int tc) {
    int n;
    cin >> n;
    int mx = -1;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        mx = max(mx, in);
        freq[in]++;
    }
 
    ll ans = 0;
    ans += 1LL * freq[0] * (n - freq[0]);
    freq[0] = 0;
 
    for (int i = 1; i <= mx; i++) {
        if (!freq[i])
            continue;
 
        for (int j = i + i; j <= mx; j += i) {
            ans += 1LL * freq[i] * freq[j];
        }
 
        freq[i] = 0;
    }
 
    cout << "Test case #" << tc << ": " << ans << "\n";
}
//*************
int main() {
    Gaber();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        doIt(i);
    }
}
```
