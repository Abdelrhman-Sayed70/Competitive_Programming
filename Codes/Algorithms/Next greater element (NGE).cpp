#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int n; cin >> n;
    vector<ll>v(n), Nge(n);
    stack<ll>st; // will contains index 
    for (auto& i : v) { cin >> i; }
    st.push(0);
    for (int i = 1; i < n; i++) {
        if (v[i] <= v[st.top()]) { st.push(i); }
        else {
            while (st.size() and v[i] > v[st.top()]) {
                Nge[st.top()] = v[i];
                st.pop();
            }
            st.push(i);
        }
    }
    for (int i = 0; i < n; ++i) {
        if (!Nge[i]) { cout << -1 << " "; }
        else { cout << Nge[i] << " "; }
    }
}