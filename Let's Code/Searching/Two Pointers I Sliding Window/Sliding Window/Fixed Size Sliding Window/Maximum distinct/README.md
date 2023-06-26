# Maximum distinct
## [Maximum distinct | Codeforces](https://codeforces.com/group/T3p02rhrmb/contest/343965/problem/B)

## Solution
```cpp
void doIt() { 
    // fixed size sliding window
    int n, k; 
    string s;
    cin >> n >> k >> s;
    set<char>st;
    multiset<char>ms;
    for (int i = 0; i < k; i++) {
        st.insert(s[i]);
        ms.insert(s[i]);
    }

    int index = 0;
    int mx = st.size();
    for (int i = k; i < n; i++) {
        // adding new element
        st.insert(s[i]);
        ms.insert(s[i]);

        // erase first element
        auto it = ms.find(s[index]);
        ms.erase(it);
        if (ms.count(s[index]) == 0)
            st.erase(s[index]);

        // maximize answer
        mx = max(mx, int(st.size()));
        index++;
    }
    cout << mx;
}
```
