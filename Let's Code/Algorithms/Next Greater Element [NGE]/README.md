# NGE
## [NGE | Codeforces](https://codeforces.com/group/T3p02rhrmb/contest/339641/problem/Q)
## [NGE | Codeforces](https://codeforces.com/group/c3FDl9EUi9/contest/263096/problem/J)

```cpp
vector<ll>NGE(vector<ll>v) {
    int n = v.size();
    vector<ll>nge(n, -1);
    stack<ll>st; // will contain indecies
    st.push(0);
    for (int i = 1; i < n; i++) {
        if (v[i] <= v[st.top()]) {
            st.push(i);
            continue;
        }

        while (st.size() and v[i] > v[st.top()]) {
            nge[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }
    return nge;
}
```

# PGE
```cpp
vector<ll>PGE(vector<ll>v) {
    int n = v.size();
    reverse(v.begin(), v.end());
    vector<ll>pge(n, -1);
    stack<ll>st; // will contains indecies
    st.push(0);
    for (int i = 1; i < n; i++) {
        if (v[i] <= v[st.top()]){
            st.push(i); 
            continue;
        }
        while (st.size() and v[i] > v[st.top()]) {
            pge[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }
    reverse(pge.begin(), pge.end());
    return pge;
}
```
