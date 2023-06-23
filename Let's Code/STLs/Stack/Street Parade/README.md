# Street Parade
## [STPAR - Street Parade | SPOJ](https://www.spoj.com/problems/STPAR/)
## [Cairo | Codeforces](https://codeforces.com/group/T3p02rhrmb/contest/339641/problem/E)

## Solution
```cpp
void doIt() {
    int n; 
    cin >> n; 
    vector<int>v(n);
    for (auto& it : v) {
        cin >> it;
    }
    int current = 1;
    stack<int>st;
    for (int i = 0; i < n; i++) {
        if (v[i] == current) {
            current++;
            continue;
        }
        while (st.size()) {
            if (st.top() == current) {
                current++;
                st.pop();
            }
            else {
                break;
            }            
        }
        st.push(v[i]);
    }
    while (st.size()) {
        if (st.top() == current) {
            current++;
            st.pop();
        }
        else {
            break;
        }
    }
    current == n + 1 ? yes : no;
}     
```
