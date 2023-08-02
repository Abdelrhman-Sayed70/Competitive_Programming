# NGE

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
void doIt() {
    int n;
    cin >> n;
    vector<ll>v(n);
    for (auto& it : v)
        cin >> it;

    vector<ll>nge = NGE(v);
    for (auto it : nge)
        cout << it << " ";
}
```
